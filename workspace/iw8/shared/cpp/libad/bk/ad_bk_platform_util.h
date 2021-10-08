/*
==============
AD_COMContainer<ISpatialAudioClient>::~AD_COMContainer<ISpatialAudioClient>
==============
*/

void __fastcall AD_COMContainer<ISpatialAudioClient>::~AD_COMContainer<ISpatialAudioClient>(AD_COMContainer<ISpatialAudioClient> *this)
{
  ??1?$AD_COMContainer@UISpatialAudioClient@@@@QEAA@XZ(this);
}

/*
==============
AD_COMContainer<IMMDevice>::GetAddressOf
==============
*/

IMMDevice **__fastcall AD_COMContainer<IMMDevice>::GetAddressOf(AD_COMContainer<IMMDevice> *this)
{
  return ?GetAddressOf@?$AD_COMContainer@UIMMDevice@@@@QEAAPEAPEAUIMMDevice@@XZ(this);
}

/*
==============
AD_COMContainer<ISpatialAudioObjectRenderStream>::~AD_COMContainer<ISpatialAudioObjectRenderStream>
==============
*/

void __fastcall AD_COMContainer<ISpatialAudioObjectRenderStream>::~AD_COMContainer<ISpatialAudioObjectRenderStream>(AD_COMContainer<ISpatialAudioObjectRenderStream> *this)
{
  ??1?$AD_COMContainer@UISpatialAudioObjectRenderStream@@@@QEAA@XZ(this);
}

/*
==============
AD_COMContainer<IMMDeviceCollection>::~AD_COMContainer<IMMDeviceCollection>
==============
*/

void __fastcall AD_COMContainer<IMMDeviceCollection>::~AD_COMContainer<IMMDeviceCollection>(AD_COMContainer<IMMDeviceCollection> *this)
{
  ??1?$AD_COMContainer@UIMMDeviceCollection@@@@QEAA@XZ(this);
}

/*
==============
AD_COMContainer<ISpatialAudioObject>::AD_COMContainer<ISpatialAudioObject>
==============
*/

void __fastcall AD_COMContainer<ISpatialAudioObject>::AD_COMContainer<ISpatialAudioObject>(AD_COMContainer<ISpatialAudioObject> *this)
{
  ??0?$AD_COMContainer@UISpatialAudioObject@@@@QEAA@XZ(this);
}

/*
==============
AD_COMContainer<IAudioFormatEnumerator>::~AD_COMContainer<IAudioFormatEnumerator>
==============
*/

void __fastcall AD_COMContainer<IAudioFormatEnumerator>::~AD_COMContainer<IAudioFormatEnumerator>(AD_COMContainer<IAudioFormatEnumerator> *this)
{
  ??1?$AD_COMContainer@UIAudioFormatEnumerator@@@@QEAA@XZ(this);
}

/*
==============
AD_SpatialAudioObjectNotifier::~AD_SpatialAudioObjectNotifier
==============
*/

void __fastcall AD_SpatialAudioObjectNotifier::~AD_SpatialAudioObjectNotifier(AD_SpatialAudioObjectNotifier *this)
{
  ??1AD_SpatialAudioObjectNotifier@@UEAA@XZ(this);
}

/*
==============
AD_COMContainer<ISpatialAudioObject>::~AD_COMContainer<ISpatialAudioObject>
==============
*/

void __fastcall AD_COMContainer<ISpatialAudioObject>::~AD_COMContainer<ISpatialAudioObject>(AD_COMContainer<ISpatialAudioObject> *this)
{
  ??1?$AD_COMContainer@UISpatialAudioObject@@@@QEAA@XZ(this);
}

/*
==============
AD_COMContainer<IMMDevice>::~AD_COMContainer<IMMDevice>
==============
*/

void __fastcall AD_COMContainer<IMMDevice>::~AD_COMContainer<IMMDevice>(AD_COMContainer<IMMDevice> *this)
{
  ??1?$AD_COMContainer@UIMMDevice@@@@QEAA@XZ(this);
}

/*
==============
AD_COMContainer<IMMDeviceEnumerator>::~AD_COMContainer<IMMDeviceEnumerator>
==============
*/

void __fastcall AD_COMContainer<IMMDeviceEnumerator>::~AD_COMContainer<IMMDeviceEnumerator>(AD_COMContainer<IMMDeviceEnumerator> *this)
{
  ??1?$AD_COMContainer@UIMMDeviceEnumerator@@@@QEAA@XZ(this);
}

/*
==============
AD_COMContainer<ISpatialAudioObject>::AD_COMContainer<ISpatialAudioObject>
==============
*/
void AD_COMContainer<ISpatialAudioObject>::AD_COMContainer<ISpatialAudioObject>(AD_COMContainer<ISpatialAudioObject> *this)
{
  this->instance = NULL;
}

/*
==============
AD_COMContainer<IMMDeviceEnumerator>::~AD_COMContainer<IMMDeviceEnumerator>
==============
*/
void AD_COMContainer<IMMDeviceEnumerator>::~AD_COMContainer<IMMDeviceEnumerator>(AD_COMContainer<IMMDeviceEnumerator> *this)
{
  IMMDeviceEnumerator *instance; 

  instance = this->instance;
  if ( instance )
  {
    this->instance = NULL;
    instance->Release(instance);
  }
}

/*
==============
AD_COMContainer<ISpatialAudioClient>::~AD_COMContainer<ISpatialAudioClient>
==============
*/
void AD_COMContainer<ISpatialAudioClient>::~AD_COMContainer<ISpatialAudioClient>(AD_COMContainer<ISpatialAudioClient> *this)
{
  ISpatialAudioClient *instance; 

  instance = this->instance;
  if ( instance )
  {
    this->instance = NULL;
    instance->Release(instance);
  }
}

/*
==============
AD_COMContainer<ISpatialAudioObject>::~AD_COMContainer<ISpatialAudioObject>
==============
*/
void AD_COMContainer<ISpatialAudioObject>::~AD_COMContainer<ISpatialAudioObject>(AD_COMContainer<ISpatialAudioObject> *this)
{
  ISpatialAudioObject *instance; 

  instance = this->instance;
  if ( instance )
  {
    this->instance = NULL;
    instance->Release(instance);
  }
}

/*
==============
AD_COMContainer<ISpatialAudioObjectRenderStream>::~AD_COMContainer<ISpatialAudioObjectRenderStream>
==============
*/
void AD_COMContainer<ISpatialAudioObjectRenderStream>::~AD_COMContainer<ISpatialAudioObjectRenderStream>(AD_COMContainer<ISpatialAudioObjectRenderStream> *this)
{
  ISpatialAudioObjectRenderStream *instance; 

  instance = this->instance;
  if ( instance )
  {
    this->instance = NULL;
    instance->Release(instance);
  }
}

/*
==============
AD_SpatialAudioObjectNotifier::~AD_SpatialAudioObjectNotifier
==============
*/
void AD_SpatialAudioObjectNotifier::~AD_SpatialAudioObjectNotifier(AD_SpatialAudioObjectNotifier *this)
{
  this->endpoint = NULL;
  this->__vftable = (AD_SpatialAudioObjectNotifier_vtbl *)&AD_SpatialAudioObjectNotifier::`vftable';
}

/*
==============
AD_COMContainer<IAudioFormatEnumerator>::~AD_COMContainer<IAudioFormatEnumerator>
==============
*/
void AD_COMContainer<IAudioFormatEnumerator>::~AD_COMContainer<IAudioFormatEnumerator>(AD_COMContainer<IAudioFormatEnumerator> *this)
{
  IAudioFormatEnumerator *instance; 

  instance = this->instance;
  if ( instance )
  {
    this->instance = NULL;
    instance->Release(instance);
  }
}

/*
==============
AD_COMContainer<IMMDevice>::~AD_COMContainer<IMMDevice>
==============
*/
void AD_COMContainer<IMMDevice>::~AD_COMContainer<IMMDevice>(AD_COMContainer<IMMDevice> *this)
{
  IMMDevice *instance; 

  instance = this->instance;
  if ( instance )
  {
    this->instance = NULL;
    instance->Release(instance);
  }
}

/*
==============
AD_COMContainer<IMMDeviceCollection>::~AD_COMContainer<IMMDeviceCollection>
==============
*/
void AD_COMContainer<IMMDeviceCollection>::~AD_COMContainer<IMMDeviceCollection>(AD_COMContainer<IMMDeviceCollection> *this)
{
  IMMDeviceCollection *instance; 

  instance = this->instance;
  if ( instance )
  {
    this->instance = NULL;
    instance->Release(instance);
  }
}

/*
==============
AD_COMContainer<IMMDevice>::GetAddressOf
==============
*/
IMMDevice **AD_COMContainer<IMMDevice>::GetAddressOf(AD_COMContainer<IMMDevice> *this)
{
  if ( this->instance && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_platform_util.h", 404, ASSERT_TYPE_ASSERT, "instance == nullptr", "instance == nullptr") )
    __debugbreak();
  return (IMMDevice **)this;
}

