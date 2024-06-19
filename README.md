# Tutorial de Instalação do ROS 2 Humble no WSL

## Passo 1: Instalar o WSL e Ubuntu
#### Para quem utiliza o Ubuntu basta seguir o tutorial o link e pular para o passo 2.
### 1.1 Habilitar o WSL 
Abra o PowerShell como Administrador e execute o seguinte comando para habilitar o WSL:
```powershell
wsl --install
```

Após ter o ubuntu instalado com esse comando basta seguir o tutorial no link abaixo:
https://docs.ros.org/en/humble/Installation/Ubuntu-Install-Debians.html
No tutorial no item "Install ROS 2 packages".
Rode os comandos abaixo:
```powershell
sudo apt update && sudo apt upgrade
```
```powershell
sudo apt install ros-humble-desktop
```
```powershell
sudo apt install ros-dev-tools
```
Após isso vamos realizar as configurações adicionais do ros.
## Passo 2: Configurando o environment
Primeiramente vamos adicionar o ros2 ao bash, logo digite o seguinte comando:
```powershell
echo "source /opt/ros/humble/setup.bash" >> ~/.bashrc
```
Feito isso abra outro terminal e siga o tutorial.
### 2.1 Cheque as variáveis de ambiente com o seguinte comando:
```powershell
printenv | grep -i ROS
```
Você deverá ver algo do tipo:
```powershell
ROS_VERSION=2
ROS_PYTHON_VERSION=3
ROS_DISTRO=humble
```
### 2.2 Setar mais algumas variaveis.
 ```powershell
echo "export ROS_DOMAIN_ID=0" >> ~/.bashrc
echo "export ROS_LOCALHOST_ONLY=1" >> ~/.bashrc

```
Pronto, dessa forma o seu ros2 humble deve estar devidamente configurado, para testar abra um terminal e digite o seguinte comando:
```powershell
ros2 run demo_nodes_cpp talker
```





