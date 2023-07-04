pipeline {
    agent any
    
    parameters {
        string(name: 'GREETING', defaultValue: 'Hello', description: 'Greeting to display')
    }
    
    stages {
        stage('Checkout') {
            steps {
                git 'https://github.com/edede1/jekins-cours'
            }
        }
        
        stage('Build') {
            steps {
                echo 'Building'
            }
        }
        
        stage('Test') {
            steps {
                echo 'test'
            }
        }
        
        stage('Deploy') {
            steps {
                echo 'deploiment'
            }
        }
        stage('Greet'){
            steps{
                echo"${params.GREETING}, ${env.NAME}!"
            }
        }
    }
}


