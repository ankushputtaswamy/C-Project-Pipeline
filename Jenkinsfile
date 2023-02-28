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
  }
}
