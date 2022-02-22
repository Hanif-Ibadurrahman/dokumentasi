# Dokumentasi

> Repository ini adalah berisikan info dan langkah - langkah seputar programming.

- [Dokumentasi C++](https://github.com/Hanif-Ibadurrahman/dokumentasi/tree/main/C%2B%2B)

## Table of Contents

1. [Linux](#types)

## Linux

<a name="types--node-and-npm"></a><a name="1.1"></a>

- [1.1](#types--node-and-npm) **Node & Npm**

  ```command
  sudo apt update
  sudo apt install nodejs && sudo apt install npm
  sudo npm cache clean --force
  sudo npm i -g n
  sudo n latest / sudo n stable
  ```

<a name="types--youtube-dl"></a><a name="1.2"></a>

- [1.2](#types--youtube-dl) **Youtube-DL**

  ```command
  sudo curl -L https://yt-dl.org/downloads/latest/youtube-dl -o /usr/local/bin/youtube-dl
  sudo chmod a+rx /usr/local/bin/youtube-dl
  ```

<a name="types--git"></a><a name="1.3"></a>

- [1.3](#types--git) **Git**

  ```command
  sudo add-apt-repository ppa:git-core/ppa
  sudo apt update
  sudo apt install git
  ```

<a name="types--composer"></a><a name="1.4"></a>

- [1.4](#types--composer) **Composer**

  ```command
  Download file secara manual di https://getcomposer.org/download/ atau
  sudo curl -L https://getcomposer.org/download/ -o /usr/local/bin/composer
  mv composer.phar /usr/local/bin/composer
  sudo chmod -R 755 /usr/local/bin/composer
  ```

<a name="types--php"></a><a name="1.4"></a>

- [1.4](#types--php) **PHP**

  ```command
  sudo apt install software-properties-common
  sudo add-apt-repository ppa:ondrej/php
  sudo apt install php8.1 php7.4
  ```

**[⬆ back to top](#table-of-contents)**
