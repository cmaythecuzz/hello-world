FROM drupal:7-apache
RUN curl -sL https://github.com/drush-ops/drush/releases/download/8.1.10/drush.phar -o /usr/local/bin/drush \
    && echo 'af355c7a5a804c4175a3dddcefb1c2a9aed29c1f66d1a26863757d5aa1c0922b  /usr/local/bin/drush' | sha256sum -c \
    && chmod +x /usr/local/bin/drush
RUN apt-get -qq update && apt-get -qq install --no-install-recommends \
        mysql-client \
    && rm -rf /var/lib/apt/lists/*
COPY . /var/www/html
COPY sites/default/settings.php.bak /var/www/html/sites/default/settings.php