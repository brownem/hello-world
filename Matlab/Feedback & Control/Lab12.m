%% Setup
clear all
close all
clc

syms s

%% Definitions %%
%G1=((1)/((s+1)*(s+3)*(s+10)));
G1=zpk([],[-1 -3 -10],1);

%G2=((s+6)/((s+2)*(s+3)*(s+5)));
G2=zpk([-6],[2 -3 -5],1);

%G3=((1)/(s*(s+5)*(s+15)));
G3=zpk([],[0 -5 -15],1);

%G4=((1)/(s*(s+4)*(s+12)));
G4=zpk([],[0 -4 -12],1);

%% Problem 1 %%
rlocus(G1)

%% Problem 2 %%
rlocus(G2)

%% Problem 3 %%
rlocus(G3)

%% Problem 4 %%
rlocus(G4)
