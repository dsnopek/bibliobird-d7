api = 2
core = 7.x

projects[drupal][type] = core
projects[drupal][version] = 7.23

; Download the Bibliobird install profile and build it
projects[bibliobird][type] = "profile"
projects[bibliobird][download][type] = "git"
projects[bibliobird][download][url] = "https://github.com/dsnopek/bibliobird.git"
projects[bibliobird][download][branch] = "master"

