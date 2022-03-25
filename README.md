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
  sudo apt install php8.1 php7.4
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

reopen terminal and run 
```command
zsh
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
