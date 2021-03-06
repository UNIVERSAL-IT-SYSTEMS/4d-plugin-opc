/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.h
 #	source generated by 4D Plugin Wizard
 #	Project : OPC
 #	author : miyako
 #	2013/09/29
 #
 # --------------------------------------------------------------------------------*/

#include "4DPluginAPI.h"

#include "opc_constants.h"

// --- OPC Resource
void OPC_Get_resource(sLONG_PTR *pResult, PackagePtr pParams);
void OPC_RESOURCE_LIST(sLONG_PTR *pResult, PackagePtr pParams);
void OPC_Get_resource_size(sLONG_PTR *pResult, PackagePtr pParams);
void OPC_Delete_resource(sLONG_PTR *pResult, PackagePtr pParams);
void OPC_Set_resource(sLONG_PTR *pResult, PackagePtr pParams);
void OPC_EXTERNAL_RESOURCE_LIST(sLONG_PTR *pResult, PackagePtr pParams);
