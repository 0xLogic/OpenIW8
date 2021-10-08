/*
==============
AD_Endpoint::GetOutputPlatformData
==============
*/

AD_Output_Endpoint_Platform *__fastcall AD_Endpoint::GetOutputPlatformData(AD_Endpoint *this)
{
  return ?GetOutputPlatformData@AD_Endpoint@@QEAAPEAUAD_Output_Endpoint_Platform@@XZ(this);
}

/*
==============
AD_Endpoint::GetInputPlatformData
==============
*/

AD_Input_Endpoint_Platform *__fastcall AD_Endpoint::GetInputPlatformData(AD_Endpoint *this)
{
  return ?GetInputPlatformData@AD_Endpoint@@QEAAPEAUAD_Input_Endpoint_Platform@@XZ(this);
}

/*
==============
AD_Endpoint::GetInputPlatformData
==============
*/
AD_Endpoint_Platform *AD_Endpoint::GetInputPlatformData(AD_Endpoint *this)
{
  if ( this->flow == Screen )
    return this->platformData;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.h", 34, ASSERT_TYPE_ASSERT, "flow == AD_EndpointFlow::Input", "flow == AD_EndpointFlow::Input") )
    __debugbreak();
  return this->platformData;
}

/*
==============
AD_Endpoint::GetOutputPlatformData
==============
*/
AD_Endpoint_Platform *AD_Endpoint::GetOutputPlatformData(AD_Endpoint *this)
{
  if ( this->flow == Graph )
    return this->platformData;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.h", 40, ASSERT_TYPE_ASSERT, "flow == AD_EndpointFlow::Output", "flow == AD_EndpointFlow::Output") )
    __debugbreak();
  return this->platformData;
}

