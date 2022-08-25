![GitHub-Mark-Light](https://user-images.githubusercontent.com/3369400/139447912-e0f43f33-6d9f-45f8-be46-2df5bbc91289.png#gh-dark-mode-only)
# MVP - Portão Eletrônico


#### Aqui é um exemplo de MVP da disciplina de Projetos de IoT




![](imagens/MVP.gif)


#### A estrutura do projeto abrange:

<img src="imagens/8.png" width="900" height="490">



####  - Foi adaptado um controle de portão 433 MHz; 
####  - Para fazer as adaptações é necessário que o circuito não seja SMD;
####  - Por isso foi utilizado um controle com circuito PTH;
####  - Foi soldado dois fios entre os pushbuttons;
####  - Utilização de relé de 3V com optoacoplador.


![](imagens/C.png)


#### Para programação do NodeMCU8266 


<img src="imagens/7.png" width="500" height="150">


> Tome cuidado ao fazer o `git clone`, pois a path não está configurada para seu computador, é melhor criar um novo projeto em platformIO, e copiar e colocar o código em `main.cpp`.


<img src="https://cdn1.iconfinder.com/data/icons/mix-color-4/502/Untitled-21-512.png" width="20" height="20"> [Blynk](https://blynk.io/), acesse e crie sua conta, pegue as credências e defina as seguintes variáveis.


```js
#define BLYNK_TEMPLATE_ID "INSIRA_SEU_ID"
#define BLYNK_DEVICE_NAME "portão"
#define BLYNK_AUTH_TOKEN "INSIRA_SEU_TOKEN"
#define BLYNK_PRINT Serial
```
Configure sua rede Wi-Fi

```js
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "NOME_REDE";
char pass[] = "SENHA";
```
Configure uma função chamada pino virtual, nesse caso foi configurado o V1.

```js
BLYNK_WRITE(V1) //FUNÇÃO PINO VIRTUAL
{
  int portao = 12; //D6
  pinMode(portao, OUTPUT);
  int pinValue = param.asInt(); //PINO VIRTUAL BLYNK
  Serial.println(pinValue);
   
  if(pinValue == 1){ digitalWrite(portao, HIGH);
                     delay (200); 
                     digitalWrite(portao, LOW);}
}
```
Para configurar isso na plataforma Blynk.

<img src="imagens/1.png" width="450" height="250">

<img src="imagens/2.png" width="450" height="250">

<img src="imagens/3.png" width="450" height="250">

<img src="imagens/4.png" width="450" height="250">

<img src="imagens/5.png" width="450" height="250">

