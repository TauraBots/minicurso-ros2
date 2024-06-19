# Criando o ambiente ros2
## Passo 1: Criando o ambiente
Para criar o ambiente é necessário digitar o comando:
```powershell
mkdir -p ~/ros2_ws/src
```
Logo depois entre no diretório
```powershell
cd ~/ros2_ws
```
Inicialize o ambiente com o comando a seguir:
```powershell
colcon build
```
### Passo 2: Criando o primeiro pacote
Para criar nosso primeiro pacote devemos acessar o diretório src:
```powershell
cd ~/ros2_ws/src
```
E logo em seguida devemos digitar o comando de criaçao do pacote:
```powershell
ros2 pkg create --buld-type ament_python simulator_package --dependencies rclpy pygame
```
### Passo 3: Criando nosso primeiro nó
Para criar o nosso primeiro nó vamor entrar dentro do diretório do nosso pacote
```powershell
cd ~/ros2_ws/src/simulator_package/simulator_package
```
Aqui criamos um novo arquivo chamado simulator_node.py
```powershell
touch simulator_node.py
```


