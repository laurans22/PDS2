 #include<iostream> 
 #include<string> 
 using namespace std; 
 int main() { 
     
    string palavra; 
    int alfabeto[26]={0}; //vetor onde cada posição é 0 e cada 0 representa uma letra, aí 0 é a, 1 é b e assim em diante
    cout<<"Digite a palavra escolhida:";
    cin>>palavra; 
  
    // Percorre cada letra da palavra e incrementa no vetor correspondente
    // .length() retorna número de caracteres da palavra 
    for (int i = 0; i<=palavra.length(); i++){
    //isso aqui dá o caractere em cada posição
    char caractere = palavra[i];
    // 'a' = 97 (ascii)
    alfabeto[caractere - 'a']++;
    }

    //Percorre e imprime a contagem, se for maior que zero no alfabeto
    for(int i = 0;i<=26;i++) 
    { 
        if(alfabeto[i]>0) 
        { 
            cout<<char('a'+i)<<" "<<alfabeto[i]<<endl; 
        } 
    } 
  
    return (0); 
 }
