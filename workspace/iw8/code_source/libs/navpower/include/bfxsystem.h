/*
==============
bfx::Renderer::~Renderer
==============
*/

void __fastcall bfx::Renderer::~Renderer(bfx::Renderer *this)
{
  ??1Renderer@bfx@@UEAA@XZ(this);
}

/*
==============
bfx::Renderer::GetColorForUsageFlags
==============
*/

bool __fastcall bfx::Renderer::GetColorForUsageFlags(bfx::Renderer *this, unsigned int areaUsageFlags, bfx::Color *colorOut)
{
  return ?GetColorForUsageFlags@Renderer@bfx@@UEAA_NIAEAVColor@2@@Z(this, areaUsageFlags, colorOut);
}

/*
==============
bfx::Renderer::GetColorForUsageFlags
==============
*/
bool bfx::Renderer::GetColorForUsageFlags(bfx::Renderer *this, unsigned int areaUsageFlags, bfx::Color *colorOut)
{
  return 0;
}

/*
==============
bfx::Renderer::~Renderer
==============
*/
void bfx::Renderer::~Renderer(bfx::Renderer *this)
{
  this->__vftable = (bfx::Renderer_vtbl *)bfx::Renderer::`vftable';
}

