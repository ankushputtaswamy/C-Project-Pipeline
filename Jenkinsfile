pipeline {
  agent any
  stages {
    stage ( 'Opening the project workspace' )
      {
    steps {
      sh '''
      cd /var/lib/jenkins/workspace/C-Project-Pipeline
      '''
    }
   }
    stage ( 'BUILDING THE BINARY' )
    {
      steps {
        sh '''
        make ABC.exe
        '''
      }
    }
    stage ( 'TESTING' )
    {
      steps {
        sh '''
        echo "Testing is successfull"
        '''
      }
    }
    stage ( 'DEPLOYMENT' )
    {
      steps {
        sh '''
        echo "Deployment is successfull"
        '''
      }
    }
    stage ( 'Pipeline Job Status' )
    {
      steps {
        sh '''
        echo "$?"
        if [ $? -eq 0 ];then
        echo "Pipeline job is Successfull"
        else
        echo "Pipeline job is Un-Successfull"
        fi
        '''
      }
    }
  }
}
