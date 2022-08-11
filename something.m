%Eigen values and eige vectors

clc 
clear 
close all

syms lam;
a = input("Enter the matrix A: ")
n = size(a);

char_poly = det(a - (lam*eye(n))) %characteristic polynomial

m = solve(char_poly, lam) %find the roots(eigen values)

disp("Eigen values: ")
disp(m)

for i=1:n
    X(:,i)=null(subs(a-lam*eye(n),lam ,m(i)))
    disp("Eigen vectors corresponding to ");
    disp(m(i));
    disp("is");
    disp(X(:,i));
end

%[V,d] = eig(A) % shortcut to find eigen values;
