# Dokumentasi

> Repository ini adalah berisikan info dan langkah - langkah seputar programming.

- [Dokumentasi C++](https://github.com/Hanif-Ibadurrahman/dokumentasi/tree/main/C%2B%2B)

## Table of Contents

1. [Linux](#types)

## Linux

<a name="types--install"></a><a name="1.1"></a>

- [1.1](#types--install) **Install**

<a name="types--node-and-npm"></a><a name="1.1.1"></a>

- [1.1.1](#types--node-and-npm) **Node & Npm**

  ```command
  sudo apt update
  sudo apt install nodejs && sudo apt install npm
  sudo npm cache clean --force
  sudo npm i -g n
  sudo n latest / sudo n stable
  ```

<a name="types--youtube-dl"></a><a name="1.1.2"></a>

- [1.1.2](#types--youtube-dl) **Youtube-DL**

  ```command
  sudo curl -L https://yt-dl.org/downloads/latest/youtube-dl -o /usr/local/bin/youtube-dl
  sudo chmod a+rx /usr/local/bin/youtube-dl
  ```

<a name="types--git"></a><a name="1.1.3"></a>

- [1.1.3](#types--git) **Git**

  Source: [GIT](https://git-scm.com/download/linux)
  ```command
  sudo add-apt-repository ppa:git-core/ppa
  sudo apt update
  sudo apt install git
  ```
  Set session
  ```command
  git config --global credential.helper store
  git config --global credential.helper cache
  ```
<a name="types--composer"></a><a name="1.1.4"></a>

- [1.1.4](#types--composer) **Composer**

  ```command
  Download file secara manual di https://getcomposer.org/download/ atau
  sudo curl -L https://getcomposer.org/download/ -o /usr/local/bin/composer
  mv composer.phar /usr/local/bin/composer
  sudo chmod -R 755 /usr/local/bin/composer
  ```

<a name="types--php"></a><a name="1.1.5"></a>

- [1.1.5](#types--php) **PHP**

  ```command
  sudo apt install software-properties-common
  sudo add-apt-repository ppa:ondrej/php
  sudo apt install php8.1 php8.1-curl php7.4 
  ```

<a name="types--nvm"></a><a name="1.1.6"></a>

- [1.1.6](#types--nvm) **[NVM]**(https://github.com/nvm-sh/nvm)

> To install or update nvm, you should run the install script

```command
curl -o- https://raw.githubusercontent.com/nvm-sh/nvm/v0.39.1/install.sh | bash
```

```command
wget -qO- https://raw.githubusercontent.com/nvm-sh/nvm/v0.39.1/install.sh | bash
```

<a name="types--zsh"></a><a name="1.1.7"></a>

- [1.1.6](#types--nvm) **[Oh My ZSH]**(https://ohmyz.sh/)

```command
sudo apt update
sudo apt install zsh
```

```command
sh -c "$(curl -fsSL https://raw.github.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"
```

for default terminal
select button side search > preferences > unnamed > command > run a custom command instead of mt shell > custom command > zsh

**[Antigen]**(https://github.com/zsh-users/antigen)

```command
curl -L git.io/antigen > antigen.zsh
```

```command
# User configuration
source ~/antigen.zsh

# Load the oh-my-zsh's library.
antigen use oh-my-zsh

# Bundles from the default repo (robbyrussell's oh-my-zsh).
antigen bundle git
antigen bundle heroku
antigen bundle pip
antigen bundle lein
antigen bundle command-not-found

# Syntax highlighting bundle.
antigen bundle zsh-users/zsh-syntax-highlighting
antigen bundle zsh-users/zsh-autosuggestions

# Load the theme.
antigen theme spaceship-prompt/spaceship-prompt

# Tell Antigen that you're done.
antigen apply

alias cgg="git log --oneline --pretty=oneline --graph"
```

reopen terminal and run 
```command
zsh
```

set zsh for default terminal
click hamburger button on terminal > preferences > unnamed > tab command > click Run a custom command instead of my shell > zsh

<a name="types--docker"></a><a name="1.1.8"></a>

- [1.1.8](#types--docker) **Docker**

Docker ps displays every docker instance currently running in your environment. If you add the -a option, then you even have the stopped ones.
  ```command
    docker ps (-a)
  ```
  
Docker-compose ps displays all the containers once started with it (currently running or not).
  ```command
    docker-compose ps
  ```  
  
The docker images show to you the images you have build, and the -a show you the intermediate images.  
  ```command
    docker images (-a)
  ``` 
  
It will build your images if they aren't already and will start your dockers
  ```command
    docker-compose up
  ```
  
If you want to re-build your images, use the option --build (you can also use the command docker-compose build to only build the images). The option -d, which means "detach" make the containers run in the background.
  ```command
    docker-compose up -d --build
  ```

With Docker, you need a separate command to build your image where you can specify the name of your image and you have to specify the PATH or URL to your context (this can be a git repository).
  ```command
    docker build (-t <NAME>) <PATH>/<URL>
  ```

Example
  ```command
    docker build -t local/something-api:latest .
  ```
Example with arg
  ```command
    docker build --build-arg APP_ENV=development -t local/something-fe:latest .
  ```
  
This command allows you to connect to the shell of your container. I prefer using "/bin/bash" but your container may not have bash installed and only "sh" which is more common.
  ```command
    docker exec -it <NAME>/<ID> <“sh”>/<”/bin/bash”>
  ```
Example
  ```command
    docker exec -it facec6d02097 sh
  ```
  
Run create the container using the image you tell it. You can specify lots of parameters, I recommend you to add a name to your container and you may need to specify some ports to expose. As for docker-compose, the -d make the container run in the background
  ```command
    docker run (-d) (-p <hostPort>:<containerPort>) (--name <NAME>) <IMGNAME>/<IMGID>
  ```

The docker rm remove only one container when docker-compose rm remove every container started with a docker-compose command.
  ```command
    docker rm <ID>/<NAME>
    docker-compose rm
  ```
  
Docker rmi delete the image you give as a parameter and recursively all the images intermediate used to build it.
  ```command
    docker rmi <ID>/<NAME>
  ```
 
This command prints you the logs of the container you specify. If you use the option -f --tail <NBLINE> you can follow the live flux of your logs (<NBLINE> is the number of lines you want to display. Keep in mind to choose a number of lines you can handle and to not be overwhelmed by your logs).
  ```command
      docker logs <ID>/<NAME> (-f --tail <NBLINE>)
  ```
  
The option (<ID>/<NAME>) with the docker-compose logs let you see the logs from only one container instead of every logs. The point here is if you don’t use the -d option when using docker run or docker-compose up you will see your logs directly (but you will need to stop the container to quit the view). It can still be useful to debug launching apps.
  ```command
      docker-compose logs (<ID>/<NAME>)
  ```

Fix-permission-docker-kill  
  ```command
    sudo aa-status
    sudo systemctl disable apparmor.service --now
    sudo service apparmor teardown
    sudo aa-status
    docker-compose down
  ```

**[⬆ back to contents](#table-of-contents)**


<a name="types--create"></a><a name="2"></a>

- [2](#types--create) **Create**

<a name="types--create-ssh"></a><a name="2.1"></a>

- [2.1](#types--create-ssh) **Create SSH**

```command
ssh-keygen -t rsa
```

How to get result ssh
```command
cat ~/.ssh/id_rsa.pub
```

**[⬆ back to contents](#table-of-contents)**

<a name="types--reset"></a><a name="3"></a>

- [3](#types--reset) **Reset**

<a name="types--reset-navicat"></a><a name="3.1"></a>

- [3.1](#types--reset-navicat) **Reset Trial Navicat On Linux**

> If you don't want to activate and just want to reset the trial, please delete the ~/.config/dconf/user files
> and the ~/.config/navicat folder. Pay attention to the backup data.

```command
rm ~/.config/dconf/user
```

```command
rm -r ~/.config/navicat
```

**[⬆ back to contents](#table-of-contents)**
