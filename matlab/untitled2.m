clear all;
clc;

n = 2;
m=2;

% A = eye(5,n);
% A(4:5,:) = rand(2,n);

A = eye(m,n);
% A(4,:) = rand(1,n);
% A(5,:) = zeros(1,n);
A(1,1) = 1;
A(1,2) = 2;
A(2,1) = 3;
A(2,2) = 4;

A

[L U P Q stats] = lusol(A, []);
rank = stats.nrank
full(L)
full(U)



full(P'*L*U*Q')
A - P' * L * U* Q'

stop()
% ZS

R = U(1:rank,1:rank);
full(R)
T = U(1:rank,rank+1:n);
full(T)
invR = R \ eye(size(R));
R * invR;

full(P)
full(Q)

Z = Q' * [-invR * T;
    eye(n-rank,n-rank)]

Zs = sparse(Z)


A * Z
B * Z


B = eye(m,n);
% B(5,:) = rand(1,n)
B(:,6) = rand(m,1)
% B = rand(5,n)

Bs = sparse(B);

Bs * Zs

% Z based on At
[LT UT PT QT stats] = lusol(A', []);
invUT = UT \ eye(size(UT));

full(LT)
full(UT)

RT = LT(1:rank,1:rank);
full(RT)
TT = LT(rank+1:n,1:rank);
full(TT)
invRT = RT \ eye(size(RT));

ZT = PT' * [-invRT' * TT';
    eye(n-rank,n-rank)]
ZTs = sparse(ZT)

A * ZT
B*ZT
Bs*ZTs



% N

[QL RL_ PL] = qr(A);

RL = RL_(1:rank,1:rank);
full(RL)
TL = RL_(1:rank,rank+1:n);
full(TL)

invRL = RL \ eye(size(RL));
invRL

invRL * TL


N = PL * [-invRL * TL;
    eye(n-rank,n-rank)]
Ns = sparse(N)

A * N
B * N
Bs * Ns
