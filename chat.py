import os

mensagens = []

nome = input("Nome: ")

while True:
  
 os.system('cls')

if len(mensagens) > 0:
    for m in mensagens:
    
      print(m['nome'], "-", m ['texto'])
print("_____")

texto = input("Mensagem : ")

if texto == "fim":
     break


mensagens.apppend({
  
"nome":  nome,
"texto":  texto,

})
  




