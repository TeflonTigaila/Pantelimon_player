include("/home/pantelimon/PRJ/PLAYER/build/Desktop-Debug/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/PLAYER-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE /home/pantelimon/PRJ/PLAYER/build/Desktop-Debug/PLAYER
    GENERATE_QT_CONF
)
