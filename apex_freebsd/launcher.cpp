#include "framework.h"
#include "apex/platform/launcher.h"
#include "launcher.h"


namespace freebsd
{


   ::e_status launcher::start()
   {

      if (!ensure_executable())
      {

         return false;

      }

      string strPath(get_executable_path());

      string strDir(file_path_folder(strPath));


      /*string strPath

      SHELLEXECUTEINFOA infoa;

      __memset(&infoa, 0, sizeof(infoa));

      infoa.cbSize         = sizeof(infoa);
      infoa.pFile         = strPath;

      infoa.pDirectory    = strDir;*/


      //execlp(strPath, strPath, (char *) 0);



      return true;

   }


} // namespace freebsd



