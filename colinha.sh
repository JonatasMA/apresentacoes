#Exemplo 1
# processo completo meu patrão
gcc exemplo_1.c
# mostra o passo a passo
gcc exemplo_1.c --save-temps
# para no compilador e resta o código assembly
gcc exemplo_1.c -S
# joga direto pro assembler
gcc exemplo_1.s

#Exemplo 2
rustc --crate-type=staticlib is_prime.rs
gcc exemplo_2.c libis_prime.a -o count_primes

#Exemplo 3
go build exemplo_3.go