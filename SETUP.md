# Setup Development
- Install Brew

    See https://docs.brew.sh/Installation
    ```
    > mkdir homebrew && curl -L https://github.com/Homebrew/brew/tarball/master | tar xz --strip 1 -C homebrew
    ```
    Adapt your *.bashrc* 
    ```
    > export BREW_HOME=$HOME/homebrew
    > export PATH=$BREW_HOME/bin:$PATH
    ```
    Commands to run in *bash* shell
    ```
    > brew --version
    ```
  
- Add Ruby to Brew

    Use brew to install ruby 2.6 in *bash* shell
    ```
    > brew install ruby@2.6
    ```
    Adapt your *.bashrc* 
    ```
    > export RUBY_HOME=$HOME/ruby
    > export PATH=$RUBY_HOME/bin:$PATH
    ```
    Commands to run in *bash* shell
    ```
    > ruby --version
    ```

- Install CacoaPods

    See https://guides.cocoapods.org/using/getting-started.html#toc_3
    
    Adapt your *.bashrc*
    ```
    > export GEM_HOME=$HOME/.gem
    > export PATH=$GEM_HOME/ruby/2.6.0/bin:$GEM_HOME/bin:$PATH
    ```

    Commands to run in *bash* shell
    ```
    > gem install cocoapods --user-install
    > gem which cocoapods
    > pod --version  
    ```
