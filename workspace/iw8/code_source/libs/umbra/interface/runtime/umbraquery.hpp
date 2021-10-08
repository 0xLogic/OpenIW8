/*
==============
Umbra::DebugRenderer::addQuad
==============
*/

void __fastcall Umbra::DebugRenderer::addQuad(Umbra::DebugRenderer *this, const Umbra::Vector3 *x0y0, const Umbra::Vector3 *x0y1, const Umbra::Vector3 *x1y1, const Umbra::Vector3 *x1y0, const Umbra::Vector4 *color)
{
  ?addQuad@DebugRenderer@Umbra@@UEAAXAEBVVector3@2@000AEBVVector4@2@@Z(this, x0y0, x0y1, x1y1, x1y0, color);
}

/*
==============
Umbra::DebugRenderer::addAABB
==============
*/

void __fastcall Umbra::DebugRenderer::addAABB(Umbra::DebugRenderer *this, const Umbra::Vector3 *mn, const Umbra::Vector3 *mx, const Umbra::Vector4 *color)
{
  ?addAABB@DebugRenderer@Umbra@@UEAAXAEBVVector3@2@0AEBVVector4@2@@Z(this, mn, mx, color);
}

/*
==============
Umbra::DebugRenderer::addLine
==============
*/

void __fastcall Umbra::DebugRenderer::addLine(Umbra::DebugRenderer *this, const Umbra::Vector3 *start, const Umbra::Vector3 *end, const Umbra::Vector4 *color)
{
  ?addLine@DebugRenderer@Umbra@@UEAAXAEBVVector3@2@0AEBVVector4@2@@Z(this, start, end, color);
}

/*
==============
Umbra::DebugRenderer::~DebugRenderer
==============
*/

void __fastcall Umbra::DebugRenderer::~DebugRenderer(Umbra::DebugRenderer *this)
{
  ??1DebugRenderer@Umbra@@UEAA@XZ(this);
}

/*
==============
Umbra::DebugRenderer::addStat
==============
*/

void __fastcall Umbra::DebugRenderer::addStat(Umbra::DebugRenderer *this, const char *stat, int val)
{
  ?addStat@DebugRenderer@Umbra@@UEAAXPEBDH@Z(this, stat, val);
}

/*
==============
Umbra::DebugRenderer::addPoint
==============
*/

void __fastcall Umbra::DebugRenderer::addPoint(Umbra::DebugRenderer *this, const Umbra::Vector3 *pt, const Umbra::Vector4 *color)
{
  ?addPoint@DebugRenderer@Umbra@@UEAAXAEBVVector3@2@AEBVVector4@2@@Z(this, pt, color);
}

/*
==============
Umbra::DebugRenderer::addLine
==============
*/
void Umbra::DebugRenderer::addLine(Umbra::DebugRenderer *this, const Umbra::Vector3 *start, const Umbra::Vector3 *end, const Umbra::Vector4 *color)
{
  ;
}

/*
==============
Umbra::DebugRenderer::addPoint
==============
*/
void Umbra::DebugRenderer::addPoint(Umbra::DebugRenderer *this, const Umbra::Vector3 *pt, const Umbra::Vector4 *color)
{
  this->addLine(this, pt, pt, color);
}

/*
==============
Umbra::DebugRenderer::addAABB
==============
*/

void __fastcall Umbra::DebugRenderer::addAABB(Umbra::DebugRenderer *this, const Umbra::Vector3 *mn, const Umbra::Vector3 *mx, const Umbra::Vector4 *color)
{
  Umbra::DebugRenderer::addAABBLines(this, mn, mx, color);
}

/*
==============
Umbra::DebugRenderer::addQuad
==============
*/
void Umbra::DebugRenderer::addQuad(Umbra::DebugRenderer *this, const Umbra::Vector3 *x0y0, const Umbra::Vector3 *x0y1, const Umbra::Vector3 *x1y1, const Umbra::Vector3 *x1y0, const Umbra::Vector4 *color)
{
  this->addLine(this, x0y0, x0y1, color);
  this->addLine(this, x0y1, x1y1, color);
  this->addLine(this, x1y1, x1y0, color);
  this->addLine(this, x1y0, x0y0, color);
}

/*
==============
Umbra::DebugRenderer::addStat
==============
*/
void Umbra::DebugRenderer::addStat(Umbra::DebugRenderer *this, const char *stat, int val)
{
  ;
}

/*
==============
Umbra::DebugRenderer::~DebugRenderer
==============
*/
void Umbra::DebugRenderer::~DebugRenderer(Umbra::DebugRenderer *this)
{
  this->__vftable = (Umbra::DebugRenderer_vtbl *)&Umbra::DebugRenderer::`vftable';
}

