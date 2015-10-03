clear
clc
%Say we are trying to calculate the number of atoms contained within a
%spherical nanoparticle - a nanoparticle that was built by deposition -
%what would need to be calculated?

R=50E-9                     %radius of Nanoparticle
r=0.2e-9                    %Radius of Atom
h=0;
lR=0;
x=0;

TotalA=0;
TotalX=0;
Diff=0;
newR=R-r;
oldR=R-r;
ratio=newR/r;
OldRatio=oldR/r;
Partical=((4/3)*pi*(R^3));  %Volume of Particle
atom=((4/3)*pi*(r^3));      %Volume of Atom

while h<R
    
    while ratio>3.813
            a=floor((2*pi*newR)/(2*r));
            TotalA=TotalA+a;
            newR=newR-(r*sqrt(3)/2);
            ratio=newR/r;
        
                if ratio>1 && ratio<2
                    TotalA=TotalA+1
                end
            
                if ratio>2 && ratio<2.154
                    TotalA=TotalA+2
                end
                
    end
           
   h=h+((sqrt(6)/3)*r);
   lR=sqrt((h^2)+(R^2));
     
   TotalA=TotalA;
   newR=lR-r;
   ratio=newR/r;
    
end

while OldRatio>3.813
    x=floor((2*pi*oldR)/(2*r));
    TotalX=TotalX+x;
    oldR=oldR-(r*sqrt(3)/2);
    OldRatio=oldR/r;
    
        if OldRatio>1 && OldRatio<2
            TotalX=TotalX+1
        end
        
        if OldRatio>2 && OldRatio<2.154
            TotalX=TotalX+2
        end
end

TotalX;
TotalA;

TotalA=(TotalA*2)-TotalX;

%Total number of atoms
TotalA
