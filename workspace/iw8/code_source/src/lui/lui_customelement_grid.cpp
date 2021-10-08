/*
==============
LUIElement_SetGridChildDynamicSize
==============
*/

void __fastcall LUIElement_SetGridChildDynamicSize(lua_State *luaVM)
{
  ?LUIElement_SetGridChildDynamicSize@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUIElement_Grid_ConvertRowPixelToLine
==============
*/
__int64 LUIElement_Grid_ConvertRowPixelToLine(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_Grid_ConvertPixelToLine(VERTICAL, luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_Grid_ConvertColumnPixelToLine
==============
*/
__int64 LUIElement_Grid_ConvertColumnPixelToLine(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_Grid_ConvertPixelToLine(HORIZONTAL, luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_Grid_ComputeRowBottomFromTop
==============
*/
__int64 LUIElement_Grid_ComputeRowBottomFromTop(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_Grid_ComputeLineMaxFromMin(VERTICAL, luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_Grid_ComputeRowTopFromBottom
==============
*/
__int64 LUIElement_Grid_ComputeRowTopFromBottom(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_Grid_ComputeLineMinFromMax(VERTICAL, luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_Grid_ComputeColumnRightFromLeft
==============
*/
__int64 LUIElement_Grid_ComputeColumnRightFromLeft(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_Grid_ComputeLineMaxFromMin(HORIZONTAL, luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_Grid_ComputeColumnLeftFromRight
==============
*/
__int64 LUIElement_Grid_ComputeColumnLeftFromRight(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_Grid_ComputeLineMinFromMax(HORIZONTAL, luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_Grid_GetPrimaryAxis
==============
*/
__int64 LUIElement_Grid_GetPrimaryAxis(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIGridData *GridData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetPrimaryAxis()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v2, luaVM);
    j_lua_pushinteger(luaVM, GridData->primaryAxis);
  }
  else
  {
    j_lua_pushnil(luaVM);
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUIElement_Grid_GetTargetColumn
==============
*/
__int64 LUIElement_Grid_GetTargetColumn(lua_State *const luaVM)
{
  unsigned int TargetLine; 
  unsigned int v3; 

  TargetLine = LUIElement_Grid_GetTargetLine(HORIZONTAL, luaVM);
  if ( (int)TargetLine > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", TargetLine, v3);
  }
  return TargetLine;
}

/*
==============
LUIElement_Grid_GetTargetRow
==============
*/
__int64 LUIElement_Grid_GetTargetRow(lua_State *const luaVM)
{
  unsigned int TargetLine; 
  unsigned int v3; 

  TargetLine = LUIElement_Grid_GetTargetLine(VERTICAL, luaVM);
  if ( (int)TargetLine > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", TargetLine, v3);
  }
  return TargetLine;
}

/*
==============
LUIElement_Grid_SetTargetRow
==============
*/
__int64 LUIElement_Grid_SetTargetRow(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_Grid_SetTargetLine(VERTICAL, luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_Grid_SetTargetColumn
==============
*/
__int64 LUIElement_Grid_SetTargetColumn(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_Grid_SetTargetLine(HORIZONTAL, luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_Grid_SetTargetRowToDefault
==============
*/
__int64 LUIElement_Grid_SetTargetRowToDefault(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_Grid_SetTargetLineToDefault(VERTICAL, luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_Grid_SetTargetColumnToDefault
==============
*/
__int64 LUIElement_Grid_SetTargetColumnToDefault(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_Grid_SetTargetLineToDefault(HORIZONTAL, luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_Grid_GetColumnPixelBoundaries
==============
*/
__int64 LUIElement_Grid_GetColumnPixelBoundaries(lua_State *const luaVM)
{
  unsigned int PixelBoundaries; 
  unsigned int v3; 

  PixelBoundaries = LUIElement_Grid_GetPixelBoundaries(HORIZONTAL, luaVM);
  if ( (int)PixelBoundaries > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", PixelBoundaries, v3);
  }
  return PixelBoundaries;
}

/*
==============
LUIElement_Grid_GetRowPixelBoundaries
==============
*/
__int64 LUIElement_Grid_GetRowPixelBoundaries(lua_State *const luaVM)
{
  unsigned int PixelBoundaries; 
  unsigned int v3; 

  PixelBoundaries = LUIElement_Grid_GetPixelBoundaries(VERTICAL, luaVM);
  if ( (int)PixelBoundaries > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", PixelBoundaries, v3);
  }
  return PixelBoundaries;
}

/*
==============
LUIElement_Grid_GetColumnBoundaries
==============
*/
__int64 LUIElement_Grid_GetColumnBoundaries(lua_State *const luaVM)
{
  unsigned int Boundaries; 
  unsigned int v3; 

  Boundaries = LUIElement_Grid_GetBoundaries(HORIZONTAL, luaVM);
  if ( (int)Boundaries > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", Boundaries, v3);
  }
  return Boundaries;
}

/*
==============
LUIElement_Grid_GetRowBoundaries
==============
*/
__int64 LUIElement_Grid_GetRowBoundaries(lua_State *const luaVM)
{
  unsigned int Boundaries; 
  unsigned int v3; 

  Boundaries = LUIElement_Grid_GetBoundaries(VERTICAL, luaVM);
  if ( (int)Boundaries > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", Boundaries, v3);
  }
  return Boundaries;
}

/*
==============
LUIElement_Grid_GetVerticalContentSize
==============
*/
__int64 LUIElement_Grid_GetVerticalContentSize(lua_State *const luaVM)
{
  unsigned int ContentPixelSize; 
  unsigned int v3; 

  ContentPixelSize = LUIElement_Grid_GetContentPixelSize(VERTICAL, luaVM);
  if ( (int)ContentPixelSize > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", ContentPixelSize, v3);
  }
  return ContentPixelSize;
}

/*
==============
LUIElement_Grid_GetHorizontalContentSize
==============
*/
__int64 LUIElement_Grid_GetHorizontalContentSize(lua_State *const luaVM)
{
  unsigned int ContentPixelSize; 
  unsigned int v3; 

  ContentPixelSize = LUIElement_Grid_GetContentPixelSize(HORIZONTAL, luaVM);
  if ( (int)ContentPixelSize > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", ContentPixelSize, v3);
  }
  return ContentPixelSize;
}

/*
==============
LUIElement_Grid_GetNumRows
==============
*/
__int64 LUIElement_Grid_GetNumRows(lua_State *const luaVM)
{
  unsigned int NumLines; 
  unsigned int v3; 

  NumLines = LUIElement_Grid_GetNumLines(VERTICAL, luaVM);
  if ( (int)NumLines > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", NumLines, v3);
  }
  return NumLines;
}

/*
==============
LUIElement_Grid_GetNumColumns
==============
*/
__int64 LUIElement_Grid_GetNumColumns(lua_State *const luaVM)
{
  unsigned int NumLines; 
  unsigned int v3; 

  NumLines = LUIElement_Grid_GetNumLines(HORIZONTAL, luaVM);
  if ( (int)NumLines > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", NumLines, v3);
  }
  return NumLines;
}

/*
==============
LUIElement_Grid_SetColumnSpacing
==============
*/
__int64 LUIElement_Grid_SetColumnSpacing(lua_State *const luaVM)
{
  unsigned int v2; 

  LUIElement_Grid_SetSpacing(HORIZONTAL, luaVM);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUIElement_Grid_SetRowSpacing
==============
*/
__int64 LUIElement_Grid_SetRowSpacing(lua_State *const luaVM)
{
  unsigned int v2; 

  LUIElement_Grid_SetSpacing(VERTICAL, luaVM);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUIElement_Grid_SetMeasureRowFunction
==============
*/
__int64 LUIElement_Grid_SetMeasureRowFunction(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_Grid_SetMeasureLineFunction(VERTICAL, luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_Grid_SetMeasureColumnFunction
==============
*/
__int64 LUIElement_Grid_SetMeasureColumnFunction(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_Grid_SetMeasureLineFunction(HORIZONTAL, luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_Grid_GetHorizontalSpacing
==============
*/
__int64 LUIElement_Grid_GetHorizontalSpacing(lua_State *const luaVM)
{
  unsigned int Spacing; 
  unsigned int v3; 

  Spacing = LUIElement_Grid_GetSpacing(HORIZONTAL, luaVM);
  if ( (int)Spacing > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", Spacing, v3);
  }
  return Spacing;
}

/*
==============
LUIElement_Grid_GetVerticalSpacing
==============
*/
__int64 LUIElement_Grid_GetVerticalSpacing(lua_State *const luaVM)
{
  unsigned int Spacing; 
  unsigned int v3; 

  Spacing = LUIElement_Grid_GetSpacing(VERTICAL, luaVM);
  if ( (int)Spacing > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", Spacing, v3);
  }
  return Spacing;
}

/*
==============
LUIElement_Grid_GetMaxVisibleRows
==============
*/
__int64 LUIElement_Grid_GetMaxVisibleRows(lua_State *const luaVM)
{
  unsigned int MaxVisible; 
  unsigned int v3; 

  MaxVisible = LUIElement_Grid_GetMaxVisible(VERTICAL, luaVM);
  if ( (int)MaxVisible > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", MaxVisible, v3);
  }
  return MaxVisible;
}

/*
==============
LUIElement_Grid_GetMaxVisibleColumns
==============
*/
__int64 LUIElement_Grid_GetMaxVisibleColumns(lua_State *const luaVM)
{
  unsigned int MaxVisible; 
  unsigned int v3; 

  MaxVisible = LUIElement_Grid_GetMaxVisible(HORIZONTAL, luaVM);
  if ( (int)MaxVisible > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", MaxVisible, v3);
  }
  return MaxVisible;
}

/*
==============
LUIElement_Grid_SetMaxVisibleRows
==============
*/
__int64 LUIElement_Grid_SetMaxVisibleRows(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_Grid_SetMaxVisible(VERTICAL, luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_Grid_SetMaxVisibleColumns
==============
*/
__int64 LUIElement_Grid_SetMaxVisibleColumns(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_Grid_SetMaxVisible(HORIZONTAL, luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_Grid_IsPositionInDataSet
==============
*/
__int64 LUIElement_Grid_IsPositionInDataSet(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIGridData *GridData; 
  int v4; 
  int v5; 
  int v6; 
  bool IsPositionInDataSet_0; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: element:IsPositionInDataSet( column, row )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v2, luaVM);
    v4 = lui_tointeger32(luaVM, 2);
    v5 = lui_tointeger32(luaVM, 3);
    if ( GridData->primaryAxis )
    {
      v6 = v5;
      v5 = v4;
    }
    else
    {
      v6 = v4;
    }
    IsPositionInDataSet_0 = LUIElement_Grid_IsPositionInDataSet_0(GridData, v6, v5);
    j_lua_pushboolean(luaVM, IsPositionInDataSet_0);
  }
  else
  {
    j_lua_pushnil(luaVM);
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v8);
  }
  return 1i64;
}

/*
==============
LUIElement_Grid_NotifyWhenPositionIsVisible
==============
*/
__int64 LUIElement_Grid_NotifyWhenPositionIsVisible(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIGridData *GridData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: element:NotifyWhenPositionIsVisible( column, row )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v2, luaVM);
    GridData->pendingNotify = 1;
    GridData->xData.notifyWhenLineVisible = lui_tointeger32(luaVM, 2);
    GridData->yData.notifyWhenLineVisible = lui_tointeger32(luaVM, 3);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUIElement_Grid_GetElementAtPosition
==============
*/
__int64 LUIElement_Grid_GetElementAtPosition(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIGridData *GridData; 
  LUIGridAxis primaryAxis; 
  int v5; 
  int v6; 
  LUIElement *ElementAtPosition_Internal; 
  LUIElement *v8; 
  unsigned int v9; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: element:GetElementAtPosition( column, row )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) && (v2 = LUI_ToElement(luaVM, 1), GridData = LUIElement_Grid_GetGridData(v2, luaVM), primaryAxis = GridData->primaryAxis, v5 = lui_tointeger32(luaVM, (primaryAxis != HORIZONTAL) + 2), v6 = lui_tointeger32(luaVM, 3 - (primaryAxis != HORIZONTAL)), ElementAtPosition_Internal = LUIElement_Grid_GetElementAtPosition_Internal(GridData, v5, v6), (v8 = ElementAtPosition_Internal) != NULL) && LUI_ElementHasWeakTableEntry(ElementAtPosition_Internal, luaVM) )
  {
    if ( GridData->buildChildFunction != -2 && GridData->pendingDimensionUpdate )
      LUIElement_Grid_RefreshChildContent(v2, v8, v5, v6, luaVM);
    LUI_PutElementOnTopOfStack(v8, luaVM);
  }
  else
  {
    j_lua_pushnil(luaVM);
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v9);
  }
  return 1i64;
}

/*
==============
LUIElement_Grid_GetNumChildren
==============
*/
__int64 LUIElement_Grid_GetNumChildren(lua_State *const luaVM)
{
  unsigned int v2; 
  LUIElement *v3; 
  LUIGridData *GridData; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetNumChildren()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v3 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v3, luaVM);
    j_lua_pushinteger(luaVM, GridData->numChildren);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUIElement_Grid_SetNumChildrenInC
==============
*/
__int64 LUIElement_Grid_SetNumChildrenInC(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_Grid_SetNumChildrenInC_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_Grid_SetNumColumnsInC
==============
*/
__int64 LUIElement_Grid_SetNumColumnsInC(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_Grid_SetNumColumnsInC_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_Grid_SetNumRowsInC
==============
*/
__int64 LUIElement_Grid_SetNumRowsInC(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_Grid_SetNumRowsInC_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_Grid_GetBuiltChildren
==============
*/
__int64 LUIElement_Grid_GetBuiltChildren(lua_State *const luaVM)
{
  unsigned int v2; 
  LUIElement *v3; 
  LUIGridData *GridData; 
  int v5; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > > *p_m_listHead; 
  ntl::internal::list_node_base *i; 
  unsigned int v9; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetBuiltChildren()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v3 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v3, luaVM);
    v5 = 0;
    j_lua_createtable(luaVM, 0, 0);
    mp_next = GridData->gridContent.m_listHead.m_sentinel.mp_next;
    p_m_listHead = &GridData->gridContent.m_listHead;
    if ( mp_next != (ntl::internal::list_node_base *)&GridData->gridContent.m_listHead )
    {
      do
      {
        if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        for ( i = mp_next[4].mp_prev; i != (ntl::internal::list_node_base *)&mp_next[3].mp_next; i = i->mp_next )
        {
          if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( LUI_ElementHasWeakTableEntry((LUIElement *)i[1].mp_prev, luaVM) )
            LUI_SetTableElement(++v5, (LUIElement *)i[1].mp_prev, luaVM);
        }
        mp_next = mp_next->mp_next;
      }
      while ( mp_next != (ntl::internal::list_node_base *)p_m_listHead );
      v2 = 1;
    }
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v9);
  }
  return v2;
}

/*
==============
LUIElement_Grid_RefreshContent
==============
*/
__int64 LUIElement_Grid_RefreshContent(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIGridData *GridData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:RefreshContent()");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    if ( j_lua_isuserdata(luaVM, 1) )
    {
      v2 = LUI_ToElement(luaVM, 1);
      if ( LUI_ElementHasWeakTableEntry(v2, luaVM) )
      {
        GridData = LUIElement_Grid_GetGridData(v2, luaVM);
        LUIElement_Grid_InvalidateChildrenContent(GridData, luaVM);
        LUIElement_Grid_PopulateChildren(v2, GridData, luaVM);
        LUI_LUIElement_InvalidateLayout(v2);
      }
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUIElement_Grid_SetRefreshChildInC
==============
*/
__int64 LUIElement_Grid_SetRefreshChildInC(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIGridData *GridData; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 6 )
    j_luaL_error(luaVM, "USAGE: element:SetRefreshChildInC( refreshFunction )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_type(luaVM, 2) == 6 )
  {
    v2 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v2, luaVM);
    if ( GridData->refreshChildFunction != -2 )
    {
      j_lua_getfield(luaVM, 1, "_gridFunctionRefs");
      j_luaL_unref(luaVM, -1, GridData->refreshChildFunction);
      GridData->refreshChildFunction = -2;
      j_lua_settop(luaVM, -2);
    }
    j_lua_getfield(luaVM, 1, "_gridFunctionRefs");
    j_lua_pushvalue(luaVM, 2);
    GridData->refreshChildFunction = j_luaL_ref(luaVM, -2);
    j_lua_settop(luaVM, -2);
    LUIElement_Grid_InvalidateChildrenContent(GridData, luaVM);
    LUI_LUIElement_InvalidateLayout(v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUIElement_Grid_SetMaxVelocity
==============
*/

__int64 __fastcall LUIElement_Grid_SetMaxVelocity(lua_State *const luaVM, double _XMM1_8)
{
  LUIElement *v4; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetMaxVelocity( maxVelocity )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v4 = LUI_ToElement(luaVM, 1);
    _RBX = LUIElement_Grid_GetGridData(v4, luaVM);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vmaxss  xmm0, xmm0, xmm1
      vmovss  dword ptr [rbx+0Ch], xmm0
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v8);
  }
  return 0i64;
}

/*
==============
LUIElement_Grid_SetSpringCoefficient
==============
*/

__int64 __fastcall LUIElement_Grid_SetSpringCoefficient(lua_State *const luaVM, double _XMM1_8)
{
  LUIElement *v4; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetSpringCoefficient( springCoefficient )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v4 = LUI_ToElement(luaVM, 1);
    _RBX = LUIElement_Grid_GetGridData(v4, luaVM);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vmaxss  xmm0, xmm0, xmm1
      vmovss  dword ptr [rbx+8], xmm0
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v8);
  }
  return 0i64;
}

/*
==============
LUIElement_Grid_AddElement
==============
*/
__int64 LUIElement_Grid_AddElement(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIElement *v3; 
  LUIGridData *customElementData; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: grid:AddElement( child )");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: grid:AddElement( child )");
  if ( !j_lua_isuserdata(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: grid:AddElement( child )");
  v2 = LUI_ToElement(luaVM, 1);
  v3 = LUI_ToElement(luaVM, 2);
  if ( v3->parent )
    j_luaL_error(luaVM, (const char *)&queryFormat, "child->parent == NULL");
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (LUIGridData *)v2->customElementData;
  if ( customElementData->buildChildFunction != -2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "LUIElement_Grid_UserSuppliesChildren( gridData )");
  v3->priority = 0;
  v3->parent = v2;
  LUI_LUIElement_AddStrongReference(v2, v3, luaVM);
  ++customElementData->requestedNumChildren;
  LUIElement_Grid_SetDimensions(v2, customElementData, luaVM);
  LUIElement_Grid_LineUpElements(customElementData, v3, NULL, luaVM);
  LUIElement_Grid_ShuffleLines(customElementData, &customElementData->xData);
  LUIElement_Grid_ShuffleLines(customElementData, &customElementData->yData);
  LUI_LUIElement_InvalidateLayout(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUIElement_Grid_RemoveElement
==============
*/
__int64 LUIElement_Grid_RemoveElement(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIElement *v3; 
  LUIGridData *customElementData; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: grid:RemoveElement( child )");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: grid:RemoveElement( child )");
  if ( !j_lua_isuserdata(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: grid:RemoveElement( child )");
  v2 = LUI_ToElement(luaVM, 1);
  v3 = LUI_ToElement(luaVM, 2);
  if ( v3->parent != v2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "child->parent == grid");
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (LUIGridData *)v2->customElementData;
  if ( customElementData->buildChildFunction == -2 )
  {
    if ( v3->strongLuaReference != -2 )
      LUI_LUIElement_RemoveStrongReference(v2, v3, luaVM);
    if ( customElementData->requestedNumChildren <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 2214, ASSERT_TYPE_ASSERT, "(gridData->requestedNumChildren > 0)", (const char *)&queryFormat, "gridData->requestedNumChildren > 0") )
      __debugbreak();
    --customElementData->requestedNumChildren;
    LUIElement_Grid_SetDimensions(v2, customElementData, luaVM);
    LUIElement_Grid_LineUpElements(customElementData, NULL, v3, luaVM);
    LUIElement_Grid_ShuffleLines(customElementData, &customElementData->xData);
    LUIElement_Grid_ShuffleLines(customElementData, &customElementData->yData);
    LUI_LUIElement_InvalidateLayout(v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUIElement_Grid_GetColumnVisibleSize
==============
*/
__int64 LUIElement_Grid_GetColumnVisibleSize(lua_State *const luaVM)
{
  unsigned int LineVisibleSize; 
  unsigned int v3; 

  LineVisibleSize = LUIElement_Grid_GetLineVisibleSize(HORIZONTAL, luaVM);
  if ( (int)LineVisibleSize > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", LineVisibleSize, v3);
  }
  return LineVisibleSize;
}

/*
==============
LUIElement_Grid_GetRowVisibleSize
==============
*/
__int64 LUIElement_Grid_GetRowVisibleSize(lua_State *const luaVM)
{
  unsigned int LineVisibleSize; 
  unsigned int v3; 

  LineVisibleSize = LUIElement_Grid_GetLineVisibleSize(VERTICAL, luaVM);
  if ( (int)LineVisibleSize > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", LineVisibleSize, v3);
  }
  return LineVisibleSize;
}

/*
==============
LUIElement_Grid_AdjustBoundingBox
==============
*/
void LUIElement_Grid_AdjustBoundingBox(LUIElement *element, LUIGridData *gridData, LUIGridAxis axis, lua_State *luaVM)
{
  __int64 v16; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-58h], xmm10 }
  _RBX = element;
  *(float *)&_XMM0 = LUIElement_Grid_MeasureRequestedVisibleContent(element, gridData, axis, luaVM);
  __asm { vmovaps xmm10, xmm0 }
  if ( !_RBX->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 2903, ASSERT_TYPE_ASSERT, "(element->parent)", (const char *)&queryFormat, "element->parent") )
    __debugbreak();
  _R8 = _RBX->parent;
  if ( axis )
    _R8 = (LUIElement *)((char *)_R8 + 24);
  if ( axis )
    _RBX = (LUIElement *)((char *)_RBX + 24);
  v16 = 1340i64;
  if ( axis )
    v16 = 2668i64;
  if ( *((_BYTE *)&gridData->buildChildFunction + v16) )
  {
    if ( *((_BYTE *)&gridData->buildChildFunction + v16) == 1 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0Ch]
        vaddss  xmm1, xmm0, dword ptr [rbx+8]
        vmovss  xmm5, cs:__real@3f800000
        vsubss  xmm0, xmm5, dword ptr [rbx+10h]
        vmulss  xmm4, xmm10, cs:__real@3f000000
        vmovaps [rsp+88h+var_18], xmm6
        vmulss  xmm6, xmm1, cs:__real@3f000000
        vmovaps [rsp+88h+var_28], xmm7
        vmovaps [rsp+88h+var_38], xmm8
        vmovss  xmm8, dword ptr [r8+0Ch]
        vmulss  xmm1, xmm8, dword ptr [rbx+10h]
        vmovaps [rsp+88h+var_48], xmm9
        vmovss  xmm9, dword ptr [r8+8]
        vmovaps xmm7, [rsp+88h+var_28]
        vmulss  xmm2, xmm0, xmm9
        vaddss  xmm2, xmm2, xmm1
        vmulss  xmm1, xmm9, dword ptr [rbx+14h]
        vmovaps xmm9, [rsp+88h+var_48]
        vsubss  xmm3, xmm6, xmm4
        vsubss  xmm0, xmm3, xmm2
        vmovss  dword ptr [rbx], xmm0
        vsubss  xmm0, xmm5, dword ptr [rbx+14h]
        vmulss  xmm2, xmm0, xmm8
        vmovaps xmm8, [rsp+88h+var_38]
        vaddss  xmm3, xmm4, xmm6
        vmovaps xmm6, [rsp+88h+var_18]
        vaddss  xmm2, xmm2, xmm1
        vsubss  xmm0, xmm3, xmm2
        vmovss  dword ptr [rbx+4], xmm0
        vmovaps xmm10, [rsp+88h+var_58]
      }
      return;
    }
    if ( *((_BYTE *)&gridData->buildChildFunction + v16) == 2 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vsubss  xmm1, xmm0, dword ptr [rbx+14h]
        vmovss  xmm2, dword ptr [rbx+4]
        vsubss  xmm0, xmm2, xmm10
        vmovss  dword ptr [rbx], xmm0
        vmovss  dword ptr [rbx+10h], xmm1
        vmovaps xmm10, [rsp+88h+var_58]
      }
      return;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 2942, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected alignment") )
    {
      __debugbreak();
      __asm { vmovaps xmm10, [rsp+88h+var_58] }
      return;
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vsubss  xmm1, xmm0, dword ptr [rbx+10h]
      vaddss  xmm2, xmm10, dword ptr [rbx]
      vmovss  dword ptr [rbx+14h], xmm1
      vmovss  dword ptr [rbx+4], xmm2
    }
  }
  __asm { vmovaps xmm10, [rsp+88h+var_58] }
}

/*
==============
LUIElement_Grid_ApplyPhysics
==============
*/
void LUIElement_Grid_ApplyPhysics(LUIElement *element, LUIGridData *gridData, LUIGridAxis axis, float unitScale, int deltaTime, lua_State *luaVM)
{
  char v42; 
  __int64 v45; 
  float v54; 
  float v55; 
  char v61; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, [rsp+0A8h+deltaTime]
    vmulss  xmm1, xmm0, cs:__real@3a83126f
    vmovaps [rsp+0A8h+var_58], xmm8
  }
  _R14 = 40i64;
  __asm { vmovaps [rsp+0A8h+var_68], xmm10 }
  if ( axis )
    _R14 = 1368i64;
  __asm
  {
    vmovaps [rsp+0A8h+var_78], xmm11
    vminss  xmm11, xmm1, cs:__real@42480000
  }
  _RDI = 44i64;
  __asm { vmovss  xmm0, dword ptr [r14+rdx] }
  if ( axis )
    _RDI = 1372i64;
  _RBX = gridData;
  __asm
  {
    vmovss  [rsp+0A8h+var_88], xmm0
    vmovss  xmm3, dword ptr [rdi+rdx]; lineStart
  }
  *(float *)&_XMM0 = LUIElement_Grid_ConvertLineDistanceToPixels(element, gridData, axis, *(float *)&_XMM3, v54, luaVM);
  __asm { vandps  xmm8, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  _RSI = 56i64;
  if ( axis )
    _RSI = 1384i64;
  __asm
  {
    vcomiss xmm8, cs:__real@3c23d70a
    vmovaps xmm10, xmm0
    vmovss  xmm0, dword ptr [rbx+8]
    vmulss  xmm3, xmm0, xmm10
    vsqrtss xmm0, xmm0, xmm0
    vmulss  xmm1, xmm0, cs:__real@40000000
    vmovaps [rsp+0A8h+var_38], xmm6
    vmovss  xmm6, dword ptr [rsi+rbx]
    vmulss  xmm2, xmm1, xmm6
    vsubss  xmm3, xmm3, xmm2
    vmulss  xmm0, xmm3, xmm11
    vaddss  xmm0, xmm0, xmm6; val
    vmovss  dword ptr [rsi+rbx], xmm0
    vmovss  xmm2, dword ptr [rbx+0Ch]; max
    vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000; min
    vmovaps [rsp+0A8h+var_48], xmm7
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, xmm10
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm1, xmm7
    vmovss  dword ptr [rsi+rbx], xmm0
    vmulss  xmm2, xmm0, xmm11
    vmulss  xmm0, xmm6, xmm10
    vmovaps xmm6, [rsp+0A8h+var_38]
    vcomiss xmm0, xmm7
  }
  if ( v42 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+rbx]; linePosition
      vmovss  [rsp+0A8h+var_88], xmm2
    }
    *(float *)&_XMM0 = LUIElement_Grid_ConvertPixelDistanceToLines(element, _RBX, axis, *(float *)&_XMM3, v55, luaVM);
    v45 = 28i64;
    if ( axis )
      v45 = 1356i64;
    __asm { vmovss  dword ptr [rdi+rbx], xmm0 }
    if ( *(int *)((char *)&_RBX->buildChildFunction + v45) >= 0 )
    {
      __asm
      {
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, ecx; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  dword ptr [rdi+rbx], xmm0 }
    }
  }
  else
  {
    __asm
    {
      vandps  xmm0, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, xmm8
    }
    *(int *)((char *)&_RBX->buildChildFunction + _RDI) = *(int *)((char *)&_RBX->buildChildFunction + _R14);
    *(int *)((char *)&_RBX->buildChildFunction + _RSI) = 0;
  }
  __asm { vmovaps xmm7, [rsp+0A8h+var_48] }
  _R11 = &v61;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
  }
}

/*
==============
LUIElement_Grid_CalculateAlignmentOffset
==============
*/

float __fastcall LUIElement_Grid_CalculateAlignmentOffset(LUIElement *grid, LUIGridData *gridData, LUIGridAxis axis, double gridSize, lua_State *luaVM)
{
  __int64 v10; 
  __int64 v17; 
  __int64 v18; 
  __int64 v28; 
  __int64 v43; 

  __asm { vmovaps [rsp+68h+var_38], xmm7 }
  v10 = 1340i64;
  if ( axis )
    v10 = 2668i64;
  _RSI = gridData;
  __asm { vmovaps xmm7, xmm3 }
  if ( *((_BYTE *)&gridData->buildChildFunction + v10) )
  {
    __asm { vmovaps [rsp+68h+var_28], xmm6 }
    if ( *((_BYTE *)&gridData->buildChildFunction + v10) == 1 )
    {
      __asm { vxorps  xmm1, xmm1, xmm1 }
      _R15 = 44i64;
      v28 = 48i64;
      if ( axis )
        _R15 = 1372i64;
      if ( axis )
        v28 = 1376i64;
      __asm
      {
        vmovss  xmm2, dword ptr [r15+rdx]
        vroundss xmm3, xmm1, xmm2, 1
        vcvttss2si edi, xmm3
      }
      *(float *)&_XMM0 = LUIElement_Grid_CalculateChildrenSize(grid, gridData, axis, *(int *)((char *)&gridData->buildChildFunction + v28), _EDI, luaVM);
      __asm { vmovaps xmm6, xmm0 }
      LUIElement_Grid_CalculateChildrenSize(grid, _RSI, axis, _EDI, _EDI, luaVM);
      __asm
      {
        vmovss  xmm1, dword ptr [r15+rsi]
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, edi
        vsubss  xmm3, xmm1, xmm2
        vmovss  xmm2, cs:__real@3f800000
        vsubss  xmm3, xmm2, xmm3
        vmulss  xmm4, xmm3, xmm0
        vaddss  xmm0, xmm7, dword ptr [rax+rsi]
        vmulss  xmm1, xmm0, cs:__real@3f000000
        vsubss  xmm2, xmm1, xmm6
        vaddss  xmm0, xmm4, xmm2
      }
    }
    else if ( *((_BYTE *)&gridData->buildChildFunction + v10) == 2 )
    {
      v17 = 52i64;
      v18 = 48i64;
      if ( axis )
        v17 = 1380i64;
      if ( axis )
        v18 = 1376i64;
      *(float *)&_XMM0 = LUIElement_Grid_CalculateChildrenSize(grid, gridData, axis, *(int *)((char *)&gridData->buildChildFunction + v18), *(int *)((char *)&gridData->buildChildFunction + v17), luaVM);
      __asm { vmovaps xmm6, xmm0 }
      LUIElement_Grid_CalculateChildrenSize(grid, _RSI, axis, *(int *)((char *)&_RSI->buildChildFunction + v17), *(int *)((char *)&_RSI->buildChildFunction + v17), luaVM);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vsubss  xmm1, xmm1, dword ptr [r15+rsi]
        vmulss  xmm2, xmm1, xmm0
        vsubss  xmm0, xmm7, xmm6
        vaddss  xmm0, xmm0, dword ptr [rax+rsi]
        vaddss  xmm0, xmm2, xmm0
      }
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 2868, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected alignment") )
        __debugbreak();
      __asm { vxorps  xmm0, xmm0, xmm0 }
    }
    __asm { vmovaps xmm6, [rsp+68h+var_28] }
  }
  else
  {
    v43 = 48i64;
    if ( axis )
      v43 = 1376i64;
    *(float *)&_XMM0 = LUIElement_Grid_MeasureLine(grid, gridData, axis, *(int *)((char *)&gridData->buildChildFunction + v43), luaVM);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, dword ptr [r14+rsi]
    }
    _R15 = 44i64;
    __asm { vaddss  xmm2, xmm0, dword ptr [rax+rsi] }
    if ( axis )
      _R15 = 1372i64;
    __asm
    {
      vmovss  xmm0, dword ptr [r15+rsi]
      vsubss  xmm1, xmm0, xmm1
      vmulss  xmm2, xmm1, xmm2
      vxorps  xmm0, xmm2, cs:__xmm@80000000800000008000000080000000
    }
  }
  __asm { vmovaps xmm7, [rsp+68h+var_38] }
  return *(float *)&_XMM0;
}

/*
==============
LUIElement_Grid_CalculateChildrenSize
==============
*/
float LUIElement_Grid_CalculateChildrenSize(LUIElement *grid, LUIGridData *gridData, LUIGridAxis axis, int lineStart, int lineEnd, lua_State *luaVM)
{
  signed int v9; 

  __asm { vmovaps [rsp+78h+var_38], xmm6 }
  v9 = lineStart;
  __asm { vmovaps [rsp+78h+var_48], xmm7 }
  if ( lineStart > lineEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 2825, ASSERT_TYPE_ASSERT, "(lineStart <= lineEnd)", (const char *)&queryFormat, "lineStart <= lineEnd") )
    __debugbreak();
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm6, xmm6, xmm6
  }
  if ( v9 > lineEnd )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    do
    {
      *(float *)&_XMM0 = LUIElement_Grid_MeasureLine(grid, gridData, axis, v9, luaVM);
      __asm { vaddss  xmm1, xmm0, dword ptr [rdi+r14] }
      ++v9;
      __asm { vaddss  xmm6, xmm6, xmm1 }
    }
    while ( v9 <= lineEnd );
    __asm { vcomiss xmm6, xmm7 }
    if ( v9 < (unsigned int)lineEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 2834, ASSERT_TYPE_ASSERT, "(outSize >= 0.f)", (const char *)&queryFormat, "outSize >= 0.f") )
      __debugbreak();
    __asm { vmovaps xmm0, xmm6 }
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_38]
    vmovaps xmm7, [rsp+78h+var_48]
  }
  return *(float *)&_XMM0;
}

/*
==============
LUIElement_Grid_ComputeAxisBoundaries
==============
*/

void __fastcall LUIElement_Grid_ComputeAxisBoundaries(const LUIGridData *gridData, const LUIGridAxisData *axisData, double referenceLinePosition, int *outFirstElementIndex, int *outLastElementIndex)
{
  int numLines; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = axisData;
  __asm { vmovaps xmm6, xmm2 }
  if ( !outFirstElementIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 393, ASSERT_TYPE_ASSERT, "(outFirstElementIndex)", (const char *)&queryFormat, "outFirstElementIndex") )
    __debugbreak();
  if ( !outLastElementIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 394, ASSERT_TYPE_ASSERT, "(outLastElementIndex)", (const char *)&queryFormat, "outLastElementIndex") )
    __debugbreak();
  if ( !gridData->numChildren && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 395, ASSERT_TYPE_ASSERT, "(gridData->numChildren != 0)", (const char *)&queryFormat, "gridData->numChildren != 0") )
    __debugbreak();
  switch ( _RBX->alignment )
  {
    case TOP:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vxorps  xmm4, xmm4, xmm4
        vmovaps xmm1, xmm6
        vmovss  xmm1, xmm0, xmm1
        vroundss xmm2, xmm4, xmm1, 1
        vcvttss2si eax, xmm2
      }
      *outFirstElementIndex = _EAX;
      __asm
      {
        vmovd   xmm0, dword ptr [rbx+10h]
        vcvtdq2ps xmm0, xmm0
        vaddss  xmm1, xmm0, xmm6
        vsubss  xmm3, xmm1, cs:__real@3f800000
        vroundss xmm1, xmm4, xmm3, 2
        vcvttss2si eax, xmm1
      }
      goto LABEL_18;
    case CENTER:
      __asm
      {
        vmovd   xmm0, dword ptr [rbx+10h]
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm0, xmm0, cs:__real@3f000000
        vsubss  xmm2, xmm6, xmm0
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm2, xmm1, xmm2
        vxorps  xmm4, xmm4, xmm4
        vroundss xmm0, xmm4, xmm2, 1
        vcvttss2si eax, xmm0
      }
      *outFirstElementIndex = _EAX;
      __asm
      {
        vmovd   xmm0, dword ptr [rbx+10h]
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm1, xmm0, cs:__real@3f000000
        vaddss  xmm2, xmm1, xmm6
        vsubss  xmm3, xmm2, cs:__real@3f800000
        vroundss xmm2, xmm4, xmm3, 2
        vcvttss2si eax, xmm2
      }
LABEL_18:
      *outLastElementIndex = _EAX;
      break;
    case BOTTOM:
      __asm
      {
        vsubss  xmm1, xmm6, cs:__real@3f800000
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vxorps  xmm3, xmm3, xmm3
        vroundss xmm2, xmm3, xmm1, 2
        vcvttss2si eax, xmm2
      }
      *outLastElementIndex = _EAX;
      __asm
      {
        vmovd   xmm0, dword ptr [rbx+10h]
        vcvtdq2ps xmm0, xmm0
        vsubss  xmm2, xmm6, xmm0
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm2, xmm1, xmm2
        vroundss xmm0, xmm3, xmm2, 1
        vcvttss2si eax, xmm0
      }
      *outFirstElementIndex = _EAX;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 418, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected alignment") )
        __debugbreak();
      break;
  }
  numLines = _RBX->numLines;
  if ( numLines >= 0 )
  {
    *outFirstElementIndex = I_clamp(*outFirstElementIndex, 0, numLines - 1);
    *outLastElementIndex = I_clamp(*outLastElementIndex, 0, _RBX->numLines - 1);
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
LUIElement_Grid_ComputeAxisFloatingBoundaries
==============
*/

void __fastcall LUIElement_Grid_ComputeAxisFloatingBoundaries(LUIElement *grid, LUIGridData *gridData, LUIGridAxis axis, double referenceLinePosition, float *outFirstElementLinePosition, float *outLastElementLinePosition, lua_State *luaVM)
{
  __int128 *v19; 
  __int64 v20; 
  __int64 v21; 
  unsigned int v22; 
  __int64 v23; 
  unsigned int flags; 
  __int64 v32; 
  unsigned int v44; 
  __int64 v45; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  __int128 v62; 
  __int128 v64; 
  void *retaddr; 

  _RAX = &retaddr;
  _R12 = outFirstElementLinePosition;
  _RBP = grid;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !outFirstElementLinePosition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 914, ASSERT_TYPE_ASSERT, "(outFirstElementLinePosition)", (const char *)&queryFormat, "outFirstElementLinePosition") )
    __debugbreak();
  _R15 = outLastElementLinePosition;
  if ( !outLastElementLinePosition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 915, ASSERT_TYPE_ASSERT, "(outLastElementLinePosition)", (const char *)&queryFormat, "outLastElementLinePosition") )
    __debugbreak();
  if ( !gridData->numChildren && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 916, ASSERT_TYPE_ASSERT, "(gridData->numChildren != 0)", (const char *)&queryFormat, "gridData->numChildren != 0") )
    __debugbreak();
  if ( axis )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+18h]
      vmovsd  xmm1, qword ptr [rbp+28h]
      vmovups [rsp+0B8h+var_68], xmm0
      vmovsd  [rsp+0B8h+var_58], xmm1
    }
    v19 = &v64;
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0]
      vmovsd  xmm1, qword ptr [rbp+10h]
      vmovups [rsp+0B8h+var_88], xmm0
      vmovsd  [rsp+0B8h+var_78], xmm1
    }
    v19 = &v62;
  }
  *(float *)&_XMM0 = LUI_Measure((LUIElementAxisPosition *)v19);
  v20 = 1340i64;
  v21 = 28i64;
  if ( axis )
    v20 = 2668i64;
  if ( *((_BYTE *)&gridData->buildChildFunction + v20) )
  {
    if ( *((_BYTE *)&gridData->buildChildFunction + v20) == 1 )
    {
      __asm { vmovss  xmm3, cs:__real@3f000000 }
      flags = _RBP->currentAnimationState.flags;
      __asm
      {
        vmovaps [rsp+0B8h+var_48], xmm7
        vmulss  xmm7, xmm0, xmm3
      }
      if ( (flags & 2) == 0 || gridData->pendingDimensionUpdate || (flags & 1) == 0 )
        goto LABEL_35;
      v32 = 28i64;
      if ( axis )
        v32 = 1356i64;
      if ( *(int *)((char *)&gridData->buildChildFunction + v32) >= 0 )
      {
        __asm
        {
          vxorps  xmm0, xmm7, cs:__xmm@80000000800000008000000080000000
          vmovaps xmm3, xmm6; linePosition
          vmovss  dword ptr [rsp+0B8h+fmt], xmm0
        }
        *(float *)&_XMM0 = LUIElement_Grid_ConvertPixelDistanceToLines(_RBP, gridData, axis, *(float *)&_XMM3, fmta, luaVM);
        __asm
        {
          vmovaps xmm3, xmm6; linePosition
          vmovss  dword ptr [r12], xmm0
          vmovss  dword ptr [rsp+0B8h+fmt], xmm7
        }
        *(float *)&_XMM0 = LUIElement_Grid_ConvertPixelDistanceToLines(_RBP, gridData, axis, *(float *)&_XMM3, fmtb, luaVM);
        __asm
        {
          vmovss  dword ptr [r15], xmm0
          vmovaps xmm7, [rsp+0B8h+var_48]
        }
      }
      else
      {
LABEL_35:
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rax+rdi]
          vmulss  xmm1, xmm0, xmm3
          vsubss  xmm2, xmm6, xmm1
          vxorps  xmm0, xmm0, xmm0
          vmovss  dword ptr [r12], xmm2
          vcvtsi2ss xmm0, xmm0, dword ptr [rax+rdi]
          vmulss  xmm1, xmm0, xmm3
          vaddss  xmm0, xmm1, xmm6
          vmovss  dword ptr [r15], xmm0
          vmovaps xmm7, [rsp+0B8h+var_48]
        }
      }
    }
    else if ( *((_BYTE *)&gridData->buildChildFunction + v20) == 2 )
    {
      __asm { vmovss  dword ptr [r15], xmm6 }
      v22 = _RBP->currentAnimationState.flags;
      if ( (v22 & 2) == 0 || gridData->pendingDimensionUpdate || (v22 & 1) == 0 )
        goto LABEL_27;
      v23 = 28i64;
      if ( axis )
        v23 = 1356i64;
      if ( *(int *)((char *)&gridData->buildChildFunction + v23) >= 0 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000
          vmovaps xmm3, xmm6; linePosition
          vmovss  dword ptr [rsp+0B8h+fmt], xmm0
        }
        *(float *)&_XMM0 = LUIElement_Grid_ConvertPixelDistanceToLines(_RBP, gridData, axis, *(float *)&_XMM3, fmt, luaVM);
        __asm { vmovss  dword ptr [r12], xmm0 }
      }
      else
      {
LABEL_27:
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rax+rdi]
          vsubss  xmm0, xmm6, xmm0
          vmovss  dword ptr [r12], xmm0
        }
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 965, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected alignment") )
    {
      __debugbreak();
    }
  }
  else
  {
    __asm { vmovss  dword ptr [r12], xmm6 }
    v44 = _RBP->currentAnimationState.flags;
    if ( (v44 & 2) == 0 || gridData->pendingDimensionUpdate || (v44 & 1) == 0 )
      goto LABEL_43;
    v45 = 28i64;
    if ( axis )
      v45 = 1356i64;
    if ( *(int *)((char *)&gridData->buildChildFunction + v45) >= 0 )
    {
      __asm
      {
        vmovaps xmm3, xmm6; linePosition
        vmovss  dword ptr [rsp+0B8h+fmt], xmm0
      }
      *(float *)&_XMM0 = LUIElement_Grid_ConvertPixelDistanceToLines(_RBP, gridData, axis, *(float *)&_XMM3, fmtc, luaVM);
      __asm { vmovss  dword ptr [r15], xmm0 }
    }
    else
    {
LABEL_43:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rax+rdi]
        vaddss  xmm1, xmm0, xmm6
        vmovss  dword ptr [r15], xmm1
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+0B8h+var_38] }
  if ( axis )
    v21 = 1356i64;
  if ( *(int *)((char *)&gridData->buildChildFunction + v21) >= 0 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r12]; val
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, eax; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  dword ptr [r12], xmm0
      vmovss  xmm0, dword ptr [r15]; val
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, dword ptr [r14+rdi]; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovss  dword ptr [r15], xmm0 }
  }
}

/*
==============
LUIElement_Grid_ComputeLineMaxFromMin
==============
*/

__int64 __fastcall LUIElement_Grid_ComputeLineMaxFromMin(LUIGridAxis axis, lua_State *luaVM, double _XMM2_8)
{
  LUIElement *v8; 
  LUIGridData *GridData; 
  __int64 v10; 
  __int64 v11; 
  unsigned int flags; 
  float v23; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:ComputeRowBottomFromTop( top ) or element:ComputeColumnRightFromLeft( left )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    __asm { vmovaps [rsp+58h+var_28], xmm6 }
    v8 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v8, luaVM);
    *(double *)&_XMM0 = lua_tonumber32(luaVM, 2);
    v10 = 28i64;
    v11 = 28i64;
    if ( axis )
      v11 = 1356i64;
    __asm { vmovaps xmm6, xmm0 }
    if ( *(int *)((char *)&GridData->buildChildFunction + v11) >= 0 )
    {
      __asm
      {
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, eax; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm6, xmm0 }
    }
    if ( GridData->pendingDimensionUpdate )
      goto LABEL_19;
    flags = v8->currentAnimationState.flags;
    if ( (flags & 1) == 0 )
      goto LABEL_19;
    if ( axis )
      v10 = 1356i64;
    if ( *(int *)((char *)&GridData->buildChildFunction + v10) >= 0 && (flags & 2) != 0 )
    {
      *(float *)&_XMM0 = LUIElement_Grid_GetAxisLength(v8, axis);
      __asm
      {
        vmovaps xmm3, xmm6; linePosition
        vmovss  [rsp+58h+var_38], xmm0
      }
      *(float *)&_XMM0 = LUIElement_Grid_ConvertPixelDistanceToLines(v8, GridData, axis, *(float *)&_XMM3, v23, luaVM);
    }
    else
    {
LABEL_19:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rcx+rdi]
        vaddss  xmm0, xmm0, xmm6
      }
    }
    __asm { vcvtss2sd xmm1, xmm0, xmm0; n }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
    __asm { vmovaps xmm6, [rsp+58h+var_28] }
    return 1i64;
  }
  else
  {
    j_lua_pushnil(luaVM);
    return 1i64;
  }
}

/*
==============
LUIElement_Grid_ComputeLineMinFromMax
==============
*/

__int64 __fastcall LUIElement_Grid_ComputeLineMinFromMax(LUIGridAxis axis, lua_State *luaVM, double _XMM2_8)
{
  LUIElement *v8; 
  LUIGridData *GridData; 
  __int64 v10; 
  __int64 v11; 
  unsigned int flags; 
  float v24; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:ComputeRowTopFromBottom( bottom ) or element:ComputeColumnLeftFromRight( right )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    __asm { vmovaps [rsp+58h+var_28], xmm6 }
    v8 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v8, luaVM);
    *(double *)&_XMM0 = lua_tonumber32(luaVM, 2);
    v10 = 28i64;
    v11 = 28i64;
    if ( axis )
      v11 = 1356i64;
    __asm { vmovaps xmm6, xmm0 }
    if ( *(int *)((char *)&GridData->buildChildFunction + v11) >= 0 )
    {
      __asm
      {
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, eax; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm6, xmm0 }
    }
    if ( GridData->pendingDimensionUpdate )
      goto LABEL_19;
    flags = v8->currentAnimationState.flags;
    if ( (flags & 1) == 0 )
      goto LABEL_19;
    if ( axis )
      v10 = 1356i64;
    if ( *(int *)((char *)&GridData->buildChildFunction + v10) >= 0 && (flags & 2) != 0 )
    {
      *(float *)&_XMM0 = LUIElement_Grid_GetAxisLength(v8, axis);
      __asm
      {
        vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
        vmovaps xmm3, xmm6; linePosition
        vmovss  [rsp+58h+var_38], xmm1
      }
      *(float *)&_XMM0 = LUIElement_Grid_ConvertPixelDistanceToLines(v8, GridData, axis, *(float *)&_XMM3, v24, luaVM);
    }
    else
    {
LABEL_19:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rcx+rdi]
        vsubss  xmm0, xmm6, xmm0
      }
    }
    __asm { vcvtss2sd xmm1, xmm0, xmm0; n }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
    __asm { vmovaps xmm6, [rsp+58h+var_28] }
    return 1i64;
  }
  else
  {
    j_lua_pushnil(luaVM);
    return 1i64;
  }
}

/*
==============
LUIElement_Grid_ComputeTransitionStep
==============
*/

double __fastcall LUIElement_Grid_ComputeTransitionStep(LUIGridAxisData *axisData, int elementPositionOnAxis, double _XMM2_8)
{
  int alignment; 
  bool v10; 
  int v11; 

  alignment = axisData->alignment;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovss  xmm6, cs:__real@3f800000
    vmovaps xmm7, xmm6
  }
  if ( axisData->alignment )
  {
    v10 = alignment == 0;
    v11 = alignment - 1;
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rcx+1Ch]
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vcomiss xmm0, xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rcx+10h]
          vxorps  xmm2, xmm2, xmm2
          vsubss  xmm3, xmm1, xmm0
          vcvtsi2ss xmm2, xmm2, edx
          vcomiss xmm2, xmm3
        }
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 2730, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected alignment") )
      {
        __debugbreak();
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm4, dword ptr [rcx+1Ch]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rcx+10h]
        vmulss  xmm3, xmm0, cs:__real@3f000000
        vxorps  xmm1, xmm1, xmm1
        vsubss  xmm2, xmm4, xmm3
        vcvtsi2ss xmm1, xmm1, edx
        vcomiss xmm1, xmm2
      }
      if ( v10 )
      {
        __asm
        {
          vsubss  xmm0, xmm2, xmm1
          vsubss  xmm7, xmm6, xmm0
        }
      }
      else
      {
        __asm
        {
          vaddss  xmm0, xmm3, xmm4
          vsubss  xmm2, xmm0, xmm6
          vcomiss xmm1, xmm2
        }
      }
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rcx+1Ch]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edx
      vcomiss xmm0, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rcx+10h]
      vxorps  xmm2, xmm2, xmm2
      vaddss  xmm3, xmm0, xmm1
      vcvtsi2ss xmm2, xmm2, eax
      vcomiss xmm2, xmm3
    }
  }
  __asm
  {
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm0, xmm7; val
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
  return I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
}

/*
==============
LUIElement_Grid_ConvertLineDistanceToPixels
==============
*/

float __fastcall LUIElement_Grid_ConvertLineDistanceToPixels(LUIElement *grid, LUIGridData *gridData, LUIGridAxis axis, double lineStart, float lineEnd, lua_State *luaVM)
{
  bool v38; 
  bool v39; 
  bool v40; 
  unsigned int v41; 
  int v48; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-78h], xmm10
  }
  _RSI = 16i64;
  __asm
  {
    vmovaps [rsp+0E8h+var_88], xmm11
    vmovaps [rsp+0E8h+var_98], xmm12
  }
  if ( axis )
    _RSI = 1344i64;
  __asm
  {
    vmovaps [rsp+0E8h+var_A8], xmm13
    vmovaps [rsp+0E8h+var_B8], xmm14
  }
  _RDI = gridData;
  __asm
  {
    vmovss  xmm14, [rsp+0E8h+lineEnd]
    vucomiss xmm3, xmm14
    vmovaps xmm13, xmm3
    vminss  xmm12, xmm3, xmm14
    vmaxss  xmm10, xmm3, xmm14
    vxorps  xmm11, xmm11, xmm11
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm0, xmm0, xmm0
  }
  if ( axis )
  {
    __asm
    {
      vxorps  xmm3, xmm3, xmm3
      vmovaps xmm1, xmm12
      vmovss  xmm1, xmm0, xmm1
      vroundss xmm2, xmm3, xmm1, 1
      vcvttss2si ebx, xmm2
      vmovaps xmm1, xmm10
      vmovss  xmm1, xmm0, xmm1
      vroundss xmm2, xmm3, xmm1, 2
      vcvttss2si r13d, xmm2
      vmovaps xmmword ptr [r11-68h], xmm9
      vmovss  xmm9, cs:__real@3f800000
    }
    v38 = _EBX < _ER13;
    v39 = _EBX == _ER13;
    v40 = _EBX <= _ER13;
    if ( (int)_EBX < (int)_ER13 )
    {
      v41 = _EBX + 1;
      __asm
      {
        vmovaps xmmword ptr [r11-38h], xmm6
        vmovaps xmmword ptr [r11-48h], xmm7
      }
      do
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, ebx
          vcomiss xmm1, xmm12
        }
        if ( v38 )
        {
          __asm
          {
            vsubss  xmm0, xmm12, xmm1
            vsubss  xmm6, xmm9, xmm0
          }
        }
        else
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, ebp
            vcomiss xmm0, xmm10
          }
          if ( v40 )
            __asm { vmovaps xmm6, xmm9 }
          else
            __asm { vsubss  xmm6, xmm10, xmm1 }
        }
        v48 = *(_DWORD *)((char *)&_RDI->maxVelocity + _RSI);
        if ( v48 > 0 && _EBX == v48 - 1 )
          __asm { vmovaps xmm7, xmm11 }
        else
          __asm { vmovss  xmm7, dword ptr [rsi+rdi+4] }
        *(float *)&_XMM0 = LUIElement_Grid_MeasureLine(grid, _RDI, axis, _EBX, luaVM);
        __asm { vaddss  xmm1, xmm0, xmm7 }
        ++_EBX;
        ++v41;
        __asm
        {
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm8, xmm8, xmm2
        }
        v38 = _EBX < _ER13;
        v39 = _EBX == _ER13;
        v40 = _EBX <= _ER13;
      }
      while ( (int)_EBX < (int)_ER13 );
      __asm
      {
        vmovaps xmm7, [rsp+0E8h+var_48]
        vmovaps xmm6, [rsp+0E8h+var_38]
      }
    }
    __asm { vcomiss xmm13, xmm14 }
    if ( !v40 )
      __asm { vxorps  xmm8, xmm8, cs:__xmm@80000000800000008000000080000000 }
    __asm
    {
      vmovss  xmm3, cs:__real@bf800000
      vcmpless xmm0, xmm11, xmm8
      vblendvps xmm2, xmm3, xmm9, xmm0
      vsubss  xmm0, xmm14, xmm13
      vcmpless xmm1, xmm11, xmm0
      vblendvps xmm0, xmm3, xmm9, xmm1
      vucomiss xmm2, xmm0
      vmovaps xmm9, [rsp+0E8h+var_68]
    }
    if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 823, ASSERT_TYPE_ASSERT, "(I_fsign( pixelDistance ) == I_fsign( lineEnd - lineStart ))", (const char *)&queryFormat, "I_fsign( pixelDistance ) == I_fsign( lineEnd - lineStart )") )
      __debugbreak();
    __asm { vmovaps xmm0, xmm8 }
  }
  __asm
  {
    vmovaps xmm8, [rsp+0E8h+var_58]
    vmovaps xmm10, [rsp+0E8h+var_78]
    vmovaps xmm11, [rsp+0E8h+var_88]
    vmovaps xmm12, [rsp+0E8h+var_98]
    vmovaps xmm13, [rsp+0E8h+var_A8]
    vmovaps xmm14, [rsp+0E8h+var_B8]
  }
  return *(float *)&_XMM0;
}

/*
==============
LUIElement_Grid_ConvertPixelDistanceToLines
==============
*/

float __fastcall LUIElement_Grid_ConvertPixelDistanceToLines(LUIElement *grid, LUIGridData *gridData, LUIGridAxis axis, double linePosition, float pixelOffset, lua_State *luaVM)
{
  int v34; 
  char v49; 
  char v50; 
  int v52; 
  char v54; 
  char v90; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovss  xmm0, cs:__real@bf800000
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm8
  }
  _RBP = 16i64;
  __asm
  {
    vmovaps xmmword ptr [r11-78h], xmm10
    vmovaps xmmword ptr [r11-88h], xmm11
  }
  if ( axis )
    _RBP = 1344i64;
  __asm
  {
    vmovss  xmm11, [rsp+108h+pixelOffset]
    vmovaps [rsp+108h+var_98], xmm12
    vandps  xmm12, xmm11, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm12, xmm8
    vmovaps [rsp+108h+var_C8], xmm15
  }
  _RSI = gridData;
  __asm
  {
    vmovss  xmm15, cs:__real@3f800000
    vcmpless xmm1, xmm8, xmm11
    vblendvps xmm1, xmm0, xmm15, xmm1
    vmovss  [rsp+108h+arg_10], xmm1
    vmovaps xmm6, xmm3
    vxorps  xmm10, xmm10, xmm10
  }
  if ( axis )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm7
      vmovaps xmmword ptr [r11-68h], xmm9
      vmovaps [rsp+108h+var_A8], xmm13
      vmovaps [rsp+108h+var_B8], xmm14
      vmovss  xmm14, [rsp+108h+arg_10]
      vxorps  xmm13, xmm13, xmm13
      vxorps  xmm7, xmm7, xmm7
      vcvtsi2ss xmm7, xmm7, dword ptr [rsi+rbp+0Ch]
      vcomiss xmm7, xmm8
    }
    v34 = *(_DWORD *)((char *)&gridData->maxVelocity + _RBP);
    __asm
    {
      vmaxss  xmm0, xmm6, xmm8
      vminss  xmm9, xmm0, xmm7
      vmovaps xmm2, xmm9
      vxorps  xmm1, xmm1, xmm1
      vmovss  xmm0, xmm1, xmm2
      vroundss xmm3, xmm13, xmm0, 1
      vsubss  xmm2, xmm9, xmm3
      vucomiss xmm2, xmm8
      vaddss  xmm1, xmm9, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm1, xmm0, xmm1
      vroundss xmm2, xmm13, xmm1, 1
      vcvttss2si ebx, xmm2
      vxorps  xmm9, xmm9, xmm9
      vcvtsi2ss xmm9, xmm9, ebx
    }
    if ( v34 < 0 )
      goto LABEL_15;
    if ( _EBX )
    {
      v49 = 0;
    }
    else
    {
      __asm { vcomiss xmm11, xmm8 }
      v49 = 1;
    }
    if ( _EBX != v34 )
      goto LABEL_12;
    __asm { vcomiss xmm11, xmm8 }
    if ( _EBX >= (unsigned int)v34 )
      v50 = 1;
    else
LABEL_12:
      v50 = 0;
    if ( v49 || v50 )
    {
      __asm { vmovaps xmm0, xmm9 }
    }
    else
    {
LABEL_15:
      __asm
      {
        vcomiss xmm11, xmm8
        vmovaps xmm7, xmm15
      }
      if ( v34 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", 0, *(_DWORD *)((char *)&gridData->maxVelocity + _RBP)) )
        __debugbreak();
      v52 = *(_DWORD *)((char *)&_RSI->maxVelocity + _RBP);
      if ( v34 < _EBX )
        _EBX = v34;
      if ( _EBX < 0 )
        _EBX = 0;
      if ( v52 > 0 && _EBX == v52 - 1 )
        __asm { vmovaps xmm6, xmm8 }
      else
        __asm { vmovss  xmm6, dword ptr [rsi+rbp+4] }
      *(float *)&_XMM0 = LUIElement_Grid_MeasureLine(grid, _RSI, axis, _EBX, luaVM);
      __asm
      {
        vaddss  xmm2, xmm0, xmm6
        vmulss  xmm0, xmm2, xmm7
        vcomiss xmm0, cs:__real@3c23d70a
        vsubss  xmm1, xmm12, xmm10
      }
      if ( v54 )
      {
        __asm
        {
          vaddss  xmm1, xmm9, cs:__real@3f000000
          vxorps  xmm0, xmm0, xmm0
          vmovss  xmm1, xmm0, xmm1
          vroundss xmm2, xmm13, xmm1, 1
          vcvttss2si eax, xmm2
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, eax
        }
      }
      else
      {
        __asm { vcomiss xmm0, xmm1 }
        if ( v54 )
        {
          __asm
          {
            vaddss  xmm10, xmm10, xmm0
            vmulss  xmm0, xmm7, xmm14
            vaddss  xmm6, xmm9, xmm0
          }
        }
        else
        {
          __asm
          {
            vdivss  xmm0, xmm1, xmm2
            vmulss  xmm1, xmm0, xmm14
            vaddss  xmm6, xmm9, xmm1
            vmovaps xmm10, xmm12
          }
        }
      }
      if ( *(int *)((char *)&_RSI->maxVelocity + _RBP) >= 0 )
      {
        __asm
        {
          vxorps  xmm7, xmm7, xmm7
          vcvtsi2ss xmm7, xmm7, eax
          vcomiss xmm7, xmm8
          vmaxss  xmm0, xmm6, xmm8
          vminss  xmm6, xmm0, xmm7
        }
      }
      __asm
      {
        vcomiss xmm10, xmm12
        vmovaps xmm0, xmm6
      }
    }
    __asm
    {
      vmovaps xmm7, [rsp+108h+var_48]
      vmovaps xmm9, [rsp+108h+var_68]
      vmovaps xmm13, [rsp+108h+var_A8]
      vmovaps xmm14, [rsp+108h+var_B8]
    }
  }
  else
  {
    __asm { vmovaps xmm0, xmm3 }
  }
  __asm { vmovaps xmm15, [rsp+108h+var_C8] }
  _R11 = &v90;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
  }
  return *(float *)&_XMM0;
}

/*
==============
LUIElement_Grid_ConvertPixelToLine
==============
*/
__int64 LUIElement_Grid_ConvertPixelToLine(LUIGridAxis axis, lua_State *luaVM)
{
  LUIElement *v7; 
  LUIGridData *GridData; 
  __int64 v9; 
  float v15; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: element:Convert[Row|Column]PixelToLine( <starting_line>, <pixelOffset> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) )
  {
    v7 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v7, luaVM);
    if ( GridData->pendingDimensionUpdate || (v7->currentAnimationState.flags & 1) == 0 )
      goto LABEL_16;
    v9 = 28i64;
    if ( axis )
      v9 = 1356i64;
    if ( *(int *)((char *)&GridData->buildChildFunction + v9) < 0 )
    {
LABEL_16:
      __asm { vxorpd  xmm1, xmm1, xmm1; n }
    }
    else
    {
      __asm { vmovaps [rsp+48h+var_18], xmm6 }
      *(double *)&_XMM0 = lua_tonumber32(luaVM, 2);
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = lua_tonumber32(luaVM, 3);
      __asm
      {
        vmovaps xmm3, xmm6; linePosition
        vmovss  [rsp+48h+var_28], xmm0
      }
      *(float *)&_XMM0 = LUIElement_Grid_ConvertPixelDistanceToLines(v7, GridData, axis, *(double *)&_XMM3, v15, luaVM);
      __asm
      {
        vmovaps xmm6, [rsp+48h+var_18]
        vcvtss2sd xmm1, xmm0, xmm0
      }
    }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
    return 1i64;
  }
  else
  {
    j_lua_pushnil(luaVM);
    return 1i64;
  }
}

/*
==============
LUIElement_Grid_GetAxisLength
==============
*/
float LUIElement_Grid_GetAxisLength(LUIElement *grid, LUIGridAxis axis)
{
  LUIElementAxisPosition v5; 

  if ( axis )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx+18h]
      vmovsd  xmm1, qword ptr [rcx+28h]
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx]
      vmovsd  xmm1, qword ptr [rcx+10h]
    }
  }
  __asm
  {
    vmovups [rsp+48h+var_28], xmm0
    vmovsd  [rsp+48h+var_18], xmm1
  }
  return LUI_Measure(&v5);
}

/*
==============
LUIElement_Grid_GetBoundaries
==============
*/
__int64 LUIElement_Grid_GetBoundaries(LUIGridAxis axis, lua_State *luaVM)
{
  LUIElement *v4; 
  float outFirstElementLinePosition; 
  float outLastElementLinePosition; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetRowBoundaries() or element:GetColumnBoundaries()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) && (v4 = LUI_ToElement(luaVM, 1), _RAX = LUIElement_Grid_GetGridData(v4, luaVM), _RAX->numChildren) )
  {
    _RCX = 40i64;
    if ( axis )
      _RCX = 1368i64;
    __asm { vmovss  xmm3, dword ptr [rcx+rax]; referenceLinePosition }
    LUIElement_Grid_ComputeAxisFloatingBoundaries(v4, _RAX, axis, *(double *)&_XMM3, &outFirstElementLinePosition, &outLastElementLinePosition, luaVM);
    __asm
    {
      vmovss  xmm1, [rsp+48h+arg_10]
      vcvtss2sd xmm1, xmm1, xmm1; n
    }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
    __asm
    {
      vmovss  xmm1, [rsp+48h+arg_18]
      vcvtss2sd xmm1, xmm1, xmm1; n
    }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  }
  else
  {
    j_lua_pushnil(luaVM);
    j_lua_pushnil(luaVM);
  }
  return 2i64;
}

/*
==============
LUIElement_Grid_GetContentPixelSize
==============
*/

__int64 __fastcall LUIElement_Grid_GetContentPixelSize(LUIGridAxis axis, lua_State *luaVM, __int64 a3, double _XMM3_8)
{
  LUIElement *v7; 
  LUIGridData *GridData; 
  __int64 v9; 
  float v15; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetVerticalPixelSize() or element:GetHorizontalPixelSize()");
  if ( j_lua_gettop(luaVM) != 1 )
    goto LABEL_12;
  if ( !j_lua_isuserdata(luaVM, 1) )
    goto LABEL_12;
  v7 = LUI_ToElement(luaVM, 1);
  GridData = LUIElement_Grid_GetGridData(v7, luaVM);
  if ( GridData->pendingDimensionUpdate || (v7->currentAnimationState.flags & 1) == 0 )
    goto LABEL_12;
  v9 = 28i64;
  if ( axis )
    v9 = 1356i64;
  if ( *(int *)((char *)&GridData->buildChildFunction + v9) >= 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm3, xmm3, xmm3; lineStart
      vcvtsi2ss xmm0, xmm0, dword ptr [rdx+rax]
      vmovss  [rsp+38h+var_18], xmm0
    }
    *(float *)&_XMM0 = LUIElement_Grid_ConvertLineDistanceToPixels(v7, GridData, axis, *(double *)&_XMM3, v15, luaVM);
    __asm { vcvtss2sd xmm1, xmm0, xmm0; n }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  }
  else
  {
LABEL_12:
    j_lua_pushnil(luaVM);
  }
  return 1i64;
}

/*
==============
LUIElement_Grid_GetElementAtPosition_Internal
==============
*/
ntl::internal::list_node_base *LUIElement_Grid_GetElementAtPosition_Internal(LUIGridData *gridData, int primaryPosition, int secondaryPosition)
{
  LUIGridAxis primaryAxis; 
  int v4; 
  int buildChildFunction; 
  LUIGridAxis secondaryAxis; 
  __int64 v8; 
  bool IsPositionInDataSet_0; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > > *p_m_listHead; 
  ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > > *v17; 
  int v18; 
  int v19; 
  __int64 v20; 
  ntl::internal::list_node_base *mp_prev; 
  ntl::internal::list_node_base *v22; 
  ntl::internal::list_node_base *i; 
  __int64 v24; 
  LUIGridAxis v26; 
  int v28; 

  primaryAxis = gridData->primaryAxis;
  v4 = primaryPosition;
  buildChildFunction = gridData->buildChildFunction;
  secondaryAxis = gridData->secondaryAxis;
  v26 = primaryAxis;
  v8 = (unsigned int)secondaryPosition;
  v28 = gridData->buildChildFunction;
  IsPositionInDataSet_0 = LUIElement_Grid_IsPositionInDataSet_0(gridData, primaryPosition, secondaryPosition);
  v10 = 48i64;
  if ( buildChildFunction != -2 )
  {
    if ( IsPositionInDataSet_0 )
    {
      v11 = 48i64;
      if ( primaryAxis )
        v11 = 1376i64;
      if ( v4 >= *(int *)((char *)&gridData->buildChildFunction + v11) )
      {
        v12 = 48i64;
        if ( secondaryAxis )
          v12 = 1376i64;
        if ( (int)v8 >= *(int *)((char *)&gridData->buildChildFunction + v12) )
        {
          v13 = 52i64;
          v14 = 52i64;
          if ( primaryAxis )
            v14 = 1380i64;
          if ( v4 <= *(int *)((char *)&gridData->buildChildFunction + v14) )
          {
            if ( secondaryAxis )
              v13 = 1380i64;
            if ( (int)v8 <= *(int *)((char *)&gridData->buildChildFunction + v13) )
              goto LABEL_15;
          }
        }
      }
    }
    return 0i64;
  }
  if ( !IsPositionInDataSet_0 )
    return 0i64;
LABEL_15:
  mp_next = gridData->gridContent.m_listHead.m_sentinel.mp_next;
  p_m_listHead = &gridData->gridContent.m_listHead;
  v17 = (ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > > *)mp_next;
  v18 = 0;
  v19 = 0;
  if ( mp_next != (ntl::internal::list_node_base *)&gridData->gridContent.m_listHead )
  {
    do
    {
      v17 = (ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > > *)v17->m_sentinel.mp_next;
      ++v19;
    }
    while ( v17 != p_m_listHead );
  }
  if ( v28 != -2 )
  {
    v20 = 48i64;
    if ( secondaryAxis )
      v20 = 1376i64;
    v8 = (unsigned int)(((int)v8 + v19 - *(int *)((char *)&gridData->buildChildFunction + v20)) % v19);
  }
  if ( (int)v8 > 0 )
  {
    do
    {
      if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 485, ASSERT_TYPE_ASSERT, "(line != gridData->gridContent.end())", (const char *)&queryFormat, "line != gridData->gridContent.end()") )
        __debugbreak();
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 116, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      mp_next = mp_next->mp_next;
      --v8;
    }
    while ( v8 );
    v4 = primaryPosition;
    v18 = 0;
  }
  if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
    __debugbreak();
  mp_prev = mp_next[4].mp_prev;
  v22 = (ntl::internal::list_node_base *)((char *)mp_next + 56);
  for ( i = mp_prev; mp_prev != v22; ++v18 )
    mp_prev = mp_prev->mp_next;
  if ( v28 != -2 )
  {
    if ( v26 )
      v10 = 1376i64;
    v4 = (v4 + v18 - *(int *)((char *)&gridData->buildChildFunction + v10)) % v18;
  }
  if ( v4 > 0 )
  {
    v24 = (unsigned int)v4;
    do
    {
      if ( i == v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 496, ASSERT_TYPE_ASSERT, "(child != line->end())", (const char *)&queryFormat, "child != line->end()") )
        __debugbreak();
      if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 116, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      i = i->mp_next;
      --v24;
    }
    while ( v24 );
  }
  if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
    __debugbreak();
  return i[1].mp_prev;
}

/*
==============
LUIElement_Grid_GetGridData
==============
*/
LUIGridData *LUIElement_Grid_GetGridData(LUIElement *element, lua_State *luaVM)
{
  if ( element->customElementData )
    return (LUIGridData *)element->customElementData;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  return (LUIGridData *)element->customElementData;
}

/*
==============
LUIElement_Grid_GetLineVisibleSize
==============
*/
__int64 LUIElement_Grid_GetLineVisibleSize(LUIGridAxis axis, lua_State *luaVM)
{
  LUIGridData *GridData; 
  unsigned int flags; 
  LUIElementAxisPosition v13; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetColumnVisibleSize() or element:GetRowVisibleSize()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    _RDI = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(_RDI, luaVM);
    flags = _RDI->currentAnimationState.flags;
    if ( (flags & 1) != 0 )
    {
      if ( GridData->adjustSizeToContent || (flags & 2) == 0 )
      {
        *(float *)&_XMM0 = LUIElement_Grid_MeasureRequestedVisibleContent(_RDI, GridData, axis, luaVM);
      }
      else
      {
        if ( axis )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rdi+18h]
            vmovsd  xmm1, qword ptr [rdi+28h]
            vmovups [rsp+48h+var_28], xmm0
            vmovsd  [rsp+48h+var_18], xmm1
          }
        }
        else
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rdi]
            vmovsd  xmm1, qword ptr [rdi+10h]
            vmovups [rsp+48h+var_28], xmm0
            vmovsd  [rsp+48h+var_18], xmm1
          }
        }
        *(float *)&_XMM0 = LUI_Measure(&v13);
      }
      __asm { vcvtss2sd xmm1, xmm0, xmm0; n }
    }
    else
    {
      __asm { vxorpd  xmm1, xmm1, xmm1 }
    }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  }
  return 1i64;
}

/*
==============
LUIElement_Grid_GetMaxVisible
==============
*/
__int64 LUIElement_Grid_GetMaxVisible(LUIGridAxis axis, lua_State *luaVM)
{
  LUIElement *v4; 
  LUIGridData *GridData; 
  __int64 v6; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetMaxVisibleRows() or element:GetMaxVisibleColumns()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v4 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v4, luaVM);
    v6 = 32i64;
    if ( axis )
      v6 = 1360i64;
    j_lua_pushinteger(luaVM, *(int *)((char *)&GridData->buildChildFunction + v6));
    return 1i64;
  }
  else
  {
    j_lua_pushnil(luaVM);
    return 1i64;
  }
}

/*
==============
LUIElement_Grid_GetNumLines
==============
*/
__int64 LUIElement_Grid_GetNumLines(LUIGridAxis axis, lua_State *luaVM)
{
  LUIElement *v4; 
  LUIGridData *GridData; 
  __int64 v6; 
  __int64 v7; 
  lua_State *v8; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetNumRows() or element:GetNumColumns()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v4 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v4, luaVM);
    v6 = 28i64;
    if ( axis )
      v6 = 1356i64;
    v7 = *(int *)((char *)&GridData->buildChildFunction + v6);
    v8 = luaVM;
    if ( (int)v7 >= 0 )
    {
      j_lua_pushinteger(luaVM, v7);
      return 1i64;
    }
  }
  else
  {
    v8 = luaVM;
  }
  j_lua_pushnil(v8);
  return 1i64;
}

/*
==============
LUIElement_Grid_GetPixelBoundaries
==============
*/

__int64 __fastcall LUIElement_Grid_GetPixelBoundaries(LUIGridAxis axis, lua_State *luaVM, __int64 a3, double _XMM3_8)
{
  __int64 v17; 
  float fmt; 
  LUIElementAxisPosition v24; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetRowBoundaries() or element:GetColumnBoundaries()");
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) || (_RDI = LUI_ToElement(luaVM, 1), _RSI = LUIElement_Grid_GetGridData(_RDI, luaVM), !_RSI->numChildren) )
  {
    j_lua_pushnil(luaVM);
    j_lua_pushnil(luaVM);
    return 2i64;
  }
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
  }
  _RCX = 40i64;
  if ( axis )
    _RCX = 1368i64;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; lineStart
    vxorps  xmm7, xmm7, xmm7
    vmovss  xmm0, dword ptr [rcx+rsi]
    vmovss  dword ptr [rsp+78h+fmt], xmm0
  }
  *(float *)&_XMM0 = LUIElement_Grid_ConvertLineDistanceToPixels(_RDI, _RSI, axis, *(double *)&_XMM3, fmt, luaVM);
  __asm { vmovaps xmm6, xmm0 }
  if ( axis )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi+18h]
      vmovsd  xmm1, qword ptr [rdi+28h]
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovsd  xmm1, qword ptr [rdi+10h]
    }
  }
  __asm
  {
    vmovups [rsp+78h+var_48], xmm0
    vmovsd  [rsp+78h+var_38], xmm1
  }
  *(float *)&_XMM0 = LUI_Measure(&v24);
  v17 = 1340i64;
  if ( axis )
    v17 = 2668i64;
  if ( *((_BYTE *)&_RSI->buildChildFunction + v17) )
  {
    if ( *((_BYTE *)&_RSI->buildChildFunction + v17) != 1 )
    {
      if ( *((_BYTE *)&_RSI->buildChildFunction + v17) == 2 )
      {
        __asm { vsubss  xmm7, xmm6, xmm0 }
      }
      else
      {
        __asm { vxorps  xmm6, xmm6, xmm6 }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 1397, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected alignment") )
          __debugbreak();
      }
      goto LABEL_23;
    }
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@3f000000
      vsubss  xmm7, xmm6, xmm0
    }
  }
  else
  {
    __asm { vmovaps xmm7, xmm6 }
  }
  __asm { vaddss  xmm6, xmm0, xmm6 }
LABEL_23:
  __asm { vcvtss2sd xmm1, xmm7, xmm7; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  __asm { vcvtss2sd xmm1, xmm6, xmm6; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  __asm
  {
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm6, [rsp+78h+var_18]
  }
  return 2i64;
}

/*
==============
LUIElement_Grid_GetSpacing
==============
*/
__int64 LUIElement_Grid_GetSpacing(LUIGridAxis axis, lua_State *luaVM)
{
  LUIElement *v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetHorizontalSpacing() or element:GetVerticalSpacing()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v4 = LUI_ToElement(luaVM, 1);
    _RAX = LUIElement_Grid_GetGridData(v4, luaVM);
    _RCX = 20i64;
    if ( axis )
      _RCX = 1348i64;
    __asm
    {
      vmovss  xmm1, dword ptr [rax+rcx]
      vcvtss2sd xmm1, xmm1, xmm1; n
    }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
    return 1i64;
  }
  else
  {
    j_lua_pushnil(luaVM);
    return 1i64;
  }
}

/*
==============
LUIElement_Grid_GetTargetLine
==============
*/
__int64 LUIElement_Grid_GetTargetLine(LUIGridAxis axis, lua_State *luaVM)
{
  LUIElement *v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetTargetRow() or element:GetTargetColumn()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v4 = LUI_ToElement(luaVM, 1);
    _RAX = LUIElement_Grid_GetGridData(v4, luaVM);
    _RCX = 40i64;
    if ( axis )
      _RCX = 1368i64;
    __asm
    {
      vmovss  xmm1, dword ptr [rax+rcx]
      vcvtss2sd xmm1, xmm1, xmm1; n
    }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
    return 1i64;
  }
  else
  {
    j_lua_pushnil(luaVM);
    return 1i64;
  }
}

/*
==============
LUIElement_Grid_InvalidateChildrenContent
==============
*/
void LUIElement_Grid_InvalidateChildrenContent(LUIGridData *gridData, lua_State *luaVM)
{
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_node_base *j; 
  LUIElement *mp_prev; 
  ntl::internal::list_node_base *v6; 
  ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > > *i; 

  if ( gridData->buildChildFunction != -2 )
  {
    mp_next = gridData->gridContent.m_listHead.m_sentinel.mp_next;
    v6 = mp_next;
    for ( i = &gridData->gridContent.m_listHead; mp_next != (ntl::internal::list_node_base *)i; v6 = mp_next )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      for ( j = mp_next[4].mp_prev; j != (ntl::internal::list_node_base *)&mp_next[3].mp_next; j = j->mp_next )
      {
        if ( !j && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        mp_prev = (LUIElement *)j[1].mp_prev;
        if ( !mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 1115, ASSERT_TYPE_ASSERT, "(child != nullptr)", (const char *)&queryFormat, "child != nullptr") )
          __debugbreak();
        if ( !LUI_ElementHasWeakTableEntry(mp_prev, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 1116, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( child, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( child, luaVM )") )
          __debugbreak();
        LUI_PutElementOnTopOfStack(mp_prev, luaVM);
        j_lua_pushnil(luaVM);
        j_lua_setfield(luaVM, -2, "_gridContentRowIndex");
        j_lua_pushnil(luaVM);
        j_lua_setfield(luaVM, -2, "_gridContentColumnIndex");
        j_lua_settop(luaVM, -2);
      }
      mp_next = v6->mp_next;
    }
  }
}

/*
==============
LUIElement_Grid_Layout
==============
*/

void __fastcall LUIElement_Grid_Layout(const LocalClientNum_t localClientNum, LUIElement *element, double unitScale, int deltaTime, lua_State *luaVM)
{
  char v15; 
  char v28; 
  bool v29; 

  __asm
  {
    vmovaps [rsp+58h+var_28], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  _RBX = (LUIGridData *)element->customElementData;
  if ( _RBX->yData.maxVisibleLines >= 1 && _RBX->xData.maxVisibleLines >= 1 )
  {
    __asm { vmovaps xmm1, xmm6; unitScale }
    LUIElement_UpdateLayout(element, *(float *)&_XMM1, deltaTime, luaVM);
    if ( _RBX->numChildren )
    {
      __asm { vmovaps xmm3, xmm6; unitScale }
      LUIElement_Grid_ApplyPhysics(element, _RBX, HORIZONTAL, *(float *)&_XMM3, deltaTime, luaVM);
      LUIElement_Grid_ShuffleLines(_RBX, &_RBX->xData);
      if ( !_RBX->numChildren && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 2613, ASSERT_TYPE_ASSERT, "(gridData->numChildren != 0)", (const char *)&queryFormat, "gridData->numChildren != 0") )
        __debugbreak();
      __asm { vmovaps xmm3, xmm6; unitScale }
      LUIElement_Grid_ApplyPhysics(element, _RBX, VERTICAL, *(float *)&_XMM3, deltaTime, luaVM);
      LUIElement_Grid_ShuffleLines(_RBX, &_RBX->yData);
    }
    __asm { vmovaps xmm2, xmm6; unitScale }
    element->layoutDeeplyCached = element->canCacheLayout;
    LUIElement_Grid_LayoutChildren(localClientNum, element, *(float *)&_XMM2, deltaTime, _RBX, luaVM);
    LUI_Tween_InvalidateCache(element);
    LUI_QuadCache_Element_Invalidate(element);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vsubss  xmm1, xmm0, dword ptr [rbx+2Ch]
      vmovss  xmm2, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm3, cs:__real@3c23d70a
      vandps  xmm1, xmm1, xmm2
      vcomiss xmm1, xmm3
    }
    if ( !v15 )
      goto LABEL_16;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+38h]
      vandps  xmm0, xmm0, xmm2
      vcomiss xmm0, xmm3
    }
    if ( !v15 )
      goto LABEL_16;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+558h]
      vsubss  xmm1, xmm0, dword ptr [rbx+55Ch]
      vandps  xmm1, xmm1, xmm2
      vcomiss xmm1, xmm3
    }
    if ( !v15 )
      goto LABEL_16;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+568h]
      vandps  xmm0, xmm0, xmm2
      vcomiss xmm0, xmm3
    }
    if ( v15 )
      v28 = 1;
    else
LABEL_16:
      v28 = 0;
    v29 = element->canCacheLayout && v28;
    element->layoutDeeplyCached &= v29;
    element->layoutCached = v29;
  }
  __asm { vmovaps xmm6, [rsp+58h+var_28] }
}

/*
==============
LUIElement_Grid_LayoutChildren
==============
*/

void __fastcall LUIElement_Grid_LayoutChildren(LocalClientNum_t localClientNum, LUIElement *element, double unitScale, int deltaTime, LUIGridData *gridData, lua_State *luaVM)
{
  ntl::internal::list_node_base *mp_next; 
  char v17; 
  char v18; 
  ntl::internal::list_node_base *i; 
  char v34; 
  char v35; 
  bool pendingDimensionUpdate; 
  LUIGridAxis primaryAxis; 
  __int64 v41; 
  LUIGridAxis secondaryAxis; 
  char v45; 
  char v46; 
  char v47; 
  char v48; 
  int v56; 
  int v57; 
  int v58; 
  LUIElement *firstChild; 
  char v88; 
  char v89; 
  ntl::internal::list_node_base *v90; 
  int v91; 
  LUIElementAxisPosition v92; 
  LUIElementAxisPosition v93; 
  void *retaddr; 
  char gridDataa; 

  _RAX = &retaddr;
  _R13 = element;
  _RBP = gridData;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmm10, xmm2
  }
  LUIElement_Grid_PopulateChildren(element, gridData, luaVM);
  LUIElement_Grid_UpdateChildrenTransitions(localClientNum, _R13, gridData, luaVM);
  mp_next = gridData->gridContent.m_listHead.m_sentinel.mp_next;
  v17 = 0;
  v90 = mp_next;
  v18 = 0;
  v88 = 0;
  if ( mp_next != (ntl::internal::list_node_base *)&gridData->gridContent.m_listHead )
  {
    __asm
    {
      vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm9, cs:__real@3c23d70a
    }
    do
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      for ( i = mp_next[4].mp_prev; i != (ntl::internal::list_node_base *)&mp_next[3].mp_next; i = i->mp_next )
      {
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vxorps  xmm7, xmm7, xmm7
        }
        if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        _RSI = i[1].mp_prev;
        if ( ((__int64)_RSI[5].mp_prev & 1) != 0 && (HIDWORD(_RSI[19].mp_next) & 0x6000) != 0 )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rsi]
            vmovsd  xmm1, qword ptr [rsi+10h]
            vmovups [rsp+128h+var_C8], xmm0
            vmovsd  [rsp+128h+var_B8], xmm1
          }
          *(float *)&_XMM0 = LUI_Measure(&v92);
          __asm
          {
            vmovups xmm1, xmmword ptr [rsi+18h]
            vmovsd  xmm2, qword ptr [rsi+28h]
            vmovups [rsp+128h+var_A8], xmm1
            vmovsd  [rsp+128h+var_98], xmm2
            vmovaps xmm6, xmm0
          }
          *(float *)&_XMM0 = LUI_Measure(&v93);
          __asm { vmovaps xmm7, xmm0 }
        }
        __asm { vmovaps xmm2, xmm10; unitScale }
        LUIElement_Layout(localClientNum, (LUIElement *)_RSI, *(float *)&_XMM2, deltaTime, luaVM);
        if ( (HIDWORD(_RSI[19].mp_next) & 0x6000) != 0 )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rsi]
            vmovsd  xmm1, qword ptr [rsi+10h]
            vmovups [rsp+128h+var_A8], xmm0
            vmovsd  [rsp+128h+var_98], xmm1
          }
          LUI_Measure(&v93);
          __asm
          {
            vsubss  xmm1, xmm6, xmm0
            vmovups xmm0, xmmword ptr [rsi+18h]
            vandps  xmm1, xmm1, xmm8
            vcomiss xmm1, xmm9
            vmovsd  xmm1, qword ptr [rsi+28h]
          }
          v18 |= !(v34 | v35);
          __asm
          {
            vmovups [rsp+128h+var_C8], xmm0
            vmovsd  [rsp+128h+var_B8], xmm1
          }
          LUI_Measure(&v92);
          __asm
          {
            vsubss  xmm1, xmm7, xmm0
            vandps  xmm1, xmm1, xmm8
            vcomiss xmm1, xmm9
          }
          v88 |= !(v34 | v35);
        }
      }
      mp_next = v90->mp_next;
      v90 = mp_next;
    }
    while ( mp_next != (ntl::internal::list_node_base *)&gridData->gridContent.m_listHead );
    _RBP = gridData;
    _R13 = element;
    v17 = v88;
  }
  pendingDimensionUpdate = _RBP->pendingDimensionUpdate;
  if ( pendingDimensionUpdate )
  {
    if ( _RBP->adjustSizeToContent && (_R13->currentAnimationState.flags & 1) != 0 )
    {
      LUIElement_Grid_AdjustBoundingBox(_R13, _RBP, HORIZONTAL, luaVM);
      LUIElement_Grid_AdjustBoundingBox(_R13, _RBP, VERTICAL, luaVM);
    }
    LUIElement_CalculateGlobalRectangle(_R13, &_R13->currentAnimationState);
    __asm { vmovaps xmm1, xmm10; unitScale }
    LUIElement_SetDimensions(_R13, *(float *)&_XMM1);
    _RBP->pendingDimensionUpdate = 0;
  }
  primaryAxis = _RBP->primaryAxis;
  v41 = 16i64;
  secondaryAxis = _RBP->secondaryAxis;
  _RSI = 16i64;
  if ( primaryAxis )
    _RSI = 1344i64;
  if ( secondaryAxis )
    v41 = 1344i64;
  _R14 = (char *)_RBP + v41;
  if ( pendingDimensionUpdate )
    goto LABEL_33;
  v45 = v17;
  if ( primaryAxis == HORIZONTAL )
    v45 = v18;
  if ( v45 )
  {
LABEL_33:
    v46 = 1;
    v89 = 1;
    if ( pendingDimensionUpdate )
    {
LABEL_38:
      v48 = 1;
      goto LABEL_39;
    }
  }
  else
  {
    v46 = 0;
    v89 = 0;
  }
  v47 = v17;
  if ( secondaryAxis == HORIZONTAL )
    v47 = v18;
  if ( v47 )
    goto LABEL_38;
  v48 = 0;
LABEL_39:
  gridDataa = v48;
  if ( v46 )
  {
    if ( _RBP->ensureClampedTargetLineOnDimensionsUpdate )
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rsi+rbp+18h]
        vmovaps xmm3, xmm6; targetPosition
      }
      LUIElement_Grid_SetTargetPosition(_R13, _RBP, primaryAxis, *(float *)&_XMM3, 1, 0, luaVM);
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+rbp+18h]
        vucomiss xmm6, xmm0
      }
      if ( !v35 )
      {
        __asm { vmovss  dword ptr [rsi+rbp+1Ch], xmm0 }
        *(float *)((char *)&_RBP->xData.targetPosition + _RSI) = 0.0;
        _R13->canCacheLayout = 0;
      }
    }
  }
  if ( v48 )
  {
    if ( _RBP->ensureClampedTargetLineOnDimensionsUpdate )
    {
      __asm
      {
        vmovss  xmm6, dword ptr [r14+18h]
        vmovaps xmm3, xmm6; targetPosition
      }
      LUIElement_Grid_SetTargetPosition(_R13, _RBP, _RBP->secondaryAxis, *(float *)&_XMM3, 1, 0, luaVM);
      __asm
      {
        vmovss  xmm0, dword ptr [r14+18h]
        vucomiss xmm6, xmm0
      }
      if ( !v35 )
      {
        __asm { vmovss  dword ptr [r14+1Ch], xmm0 }
        *((_DWORD *)_R14 + 10) = 0;
        _R13->canCacheLayout = 0;
      }
    }
  }
  if ( _RBP->numChildren )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [r13+0]
      vmovsd  xmm1, qword ptr [r13+10h]
    }
    v56 = *(int *)((char *)&_RBP->xData.managedLines + _RSI);
    v57 = *(int *)((char *)&_RBP->xData.maxVisibleLines + _RSI);
    v58 = *((_DWORD *)_R14 + 8);
    __asm
    {
      vmovups [rsp+128h+var_A8], xmm0
      vmovsd  [rsp+128h+var_98], xmm1
    }
    v91 = v56;
    *(float *)&_XMM0 = LUI_Measure(&v93);
    __asm
    {
      vmovups xmm1, xmmword ptr [r13+18h]
      vmovsd  xmm2, qword ptr [r13+28h]
      vmovups [rsp+128h+var_A8], xmm1
      vmovsd  [rsp+128h+var_98], xmm2
      vmovaps xmm7, xmm0
    }
    *(float *)&_XMM0 = LUI_Measure(&v93);
    _EBX = _RBP->primaryAxis;
    _EAX = 0;
    __asm
    {
      vmovd   xmm2, eax
      vmovd   xmm1, ebx
      vpcmpeqd xmm3, xmm1, xmm2
      vmovaps xmm6, xmm0
      vblendvps xmm3, xmm6, xmm7, xmm3; gridSize
    }
    *(float *)&_XMM0 = LUIElement_Grid_CalculateAlignmentOffset(_R13, _RBP, _RBP->primaryAxis, *(double *)&_XMM3, luaVM);
    _EAX = 0;
    __asm
    {
      vmovd   xmm2, eax
      vmovd   xmm1, ebx
      vpcmpeqd xmm3, xmm1, xmm2
      vblendvps xmm3, xmm7, xmm6, xmm3; gridSize
      vmovaps xmm9, xmm0
      vmovaps xmm8, xmm0
    }
    *(float *)&_XMM0 = LUIElement_Grid_CalculateAlignmentOffset(_R13, _RBP, _RBP->secondaryAxis, *(double *)&_XMM3, luaVM);
    firstChild = _R13->firstChild;
    __asm { vmovaps xmm6, xmm0 }
    if ( firstChild )
    {
      while ( 1 )
      {
        __asm { vmovaps xmm3, xmm8; position }
        LUIElement_Grid_OverrideAnimationState(_RBP->primaryAxis, firstChild, &firstChild->currentAnimationState, *(float *)&_XMM3);
        __asm { vmovaps xmm3, xmm6; position }
        LUIElement_Grid_OverrideAnimationState(_RBP->secondaryAxis, firstChild, &firstChild->currentAnimationState, *(float *)&_XMM3);
        __asm { vmovaps xmm2, xmm10; unitScale }
        firstChild->layoutCached = 0;
        LUIElement_Layout(localClientNum, firstChild, *(float *)&_XMM2, 0, luaVM);
        _R13->layoutDeeplyCached &= firstChild->layoutDeeplyCached;
        *(float *)&_XMM0 = LUIElement_Grid_MeasureLine(_R13, _RBP, _RBP->primaryAxis, v57, luaVM);
        __asm { vmovaps xmm7, xmm0 }
        *(float *)&_XMM0 = LUIElement_Grid_MeasureLine(_R13, _RBP, _RBP->secondaryAxis, v58, luaVM);
        firstChild = firstChild->nextSibling;
        if ( !firstChild )
          break;
        if ( v57 == v91 )
        {
          __asm { vaddss  xmm0, xmm0, dword ptr [r14+4] }
          v57 = *(int *)((char *)&_RBP->xData.maxVisibleLines + _RSI);
          ++v58;
          __asm
          {
            vaddss  xmm6, xmm6, xmm0
            vmovaps xmm8, xmm9
          }
        }
        else
        {
          __asm
          {
            vaddss  xmm0, xmm7, dword ptr [rsi+rbp+4]
            vaddss  xmm8, xmm8, xmm0
          }
          ++v57;
        }
      }
    }
    v48 = gridDataa;
  }
  __asm
  {
    vmovaps xmm10, [rsp+128h+var_88]
    vmovaps xmm9, [rsp+128h+var_78]
    vmovaps xmm8, [rsp+128h+var_68]
    vmovaps xmm7, [rsp+128h+var_58]
    vmovaps xmm6, [rsp+128h+var_48]
  }
  if ( (v89 || v48) && LUI_BeginEventWithElement(localClientNum, _R13, "grid_size_updated", luaVM) )
    LUI_EndEventWithElement(luaVM);
}

/*
==============
LUIElement_Grid_LineUpElements
==============
*/
void LUIElement_Grid_LineUpElements(LUIGridData *gridData, LUIElement *addChild, LUIElement *removeChild, lua_State *luaVM)
{
  LUIElement *v5; 
  LUIGridData *v6; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *> > *p_m_listHead; 
  ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *> > *v9; 
  ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > > *v10; 
  ntl::internal::list_node_base *v11; 
  int v12; 
  ntl::internal::list_node_base *mp_prev; 
  ntl::internal::list_node_base **p_mp_next; 
  ntl::internal::pool_allocator_freelist<24> *p_m_freelist; 
  ntl::internal::list_node<LUIElement *> *v16; 
  ntl::internal::list_node_base *v17; 
  ntl::internal::list_node_base **p_mp_prev; 
  ntl::internal::list_node<LUIElement *> **v19; 
  ntl::internal::list_node<LUIElement *> *v20; 
  ntl::internal::list_node_base *v21; 
  int v22; 
  __int64 v23; 
  int v24; 
  ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *> > *v25; 
  ntl::internal::list_node_base *v26; 
  LUIElement *v27; 
  ntl::internal::list_node<LUIElement *> **v28; 
  ntl::internal::list_node<LUIElement *> *v29; 
  ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *> > *v30; 
  ntl::internal::list_node<LUIElement *> *v31; 
  LUIGridAxis primaryAxis; 
  int v33; 
  int v34; 
  ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *> > *v35; 
  bool v36; 
  ntl::internal::list_node_base *v37; 

  v5 = addChild;
  v6 = gridData;
  if ( gridData->buildChildFunction != -2 )
    return;
  mp_next = gridData->scratch.m_listHead.m_sentinel.mp_next;
  p_m_listHead = &gridData->scratch.m_listHead;
  if ( mp_next != (ntl::internal::list_node_base *)&gridData->scratch.m_listHead )
  {
    do
    {
      v9 = (ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *> > *)mp_next->mp_next;
      mp_next->mp_prev = (ntl::internal::list_node_base *)v6->scratch.m_freelist.m_head.mp_next;
      v6->scratch.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_next;
      mp_next = &v9->m_sentinel;
    }
    while ( v9 != p_m_listHead );
  }
  p_m_listHead->m_sentinel.mp_prev = &p_m_listHead->m_sentinel;
  v10 = &v6->gridContent.m_listHead;
  p_m_listHead->m_sentinel.mp_next = &p_m_listHead->m_sentinel;
  v11 = v6->gridContent.m_listHead.m_sentinel.mp_next;
  v12 = 0;
  v37 = v11;
  if ( v11 != (ntl::internal::list_node_base *)&v6->gridContent.m_listHead )
  {
    do
    {
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      mp_prev = v11[4].mp_prev;
      p_mp_next = &v11[3].mp_next;
      while ( mp_prev != (ntl::internal::list_node_base *)p_mp_next )
      {
        if ( !mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( (LUIElement *)mp_prev[1].mp_prev != removeChild )
        {
          p_m_freelist = &gridData->scratch.m_freelist;
          if ( !gridData->scratch.m_freelist.m_head.mp_next )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
              __debugbreak();
            if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
              __debugbreak();
          }
          if ( (ntl::internal::pool_allocator_freelist<24> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, gridData->scratch.m_data.m_size) )
            __debugbreak();
          v16 = (ntl::internal::list_node<LUIElement *> *)p_m_freelist->m_head.mp_next;
          p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
          v16->mp_prev = NULL;
          v16->mp_next = NULL;
          v16->m_data = (LUIElement *)mp_prev[1].mp_prev;
          ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *>>::insert_before(p_m_listHead, (ntl::internal::list_node<LUIElement *> *)p_m_listHead, v16);
          ++v12;
        }
        mp_prev = mp_prev->mp_next;
      }
      v17 = v37[4].mp_prev;
      if ( v17 != (ntl::internal::list_node_base *)p_mp_next )
      {
        do
        {
          p_mp_prev = &v17->mp_next->mp_prev;
          v17->mp_prev = v37[2].mp_prev;
          v37[2].mp_prev = v17;
          v17 = (ntl::internal::list_node_base *)p_mp_prev;
        }
        while ( p_mp_prev != p_mp_next );
      }
      *p_mp_next = (ntl::internal::list_node_base *)p_mp_next;
      v10 = &gridData->gridContent.m_listHead;
      v11[4].mp_prev = (ntl::internal::list_node_base *)((char *)v11 + 56);
      v11 = v37->mp_next;
      v37 = v11;
    }
    while ( v11 != (ntl::internal::list_node_base *)&gridData->gridContent.m_listHead );
    v5 = addChild;
    v6 = gridData;
  }
  if ( v5 )
  {
    v19 = (ntl::internal::list_node<LUIElement *> **)&v6->scratch.m_freelist;
    if ( !v6->scratch.m_freelist.m_head.mp_next )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
      if ( !*v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
    }
    if ( *v19 == (ntl::internal::list_node<LUIElement *> *)v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, v6->scratch.m_data.m_size) )
      __debugbreak();
    v20 = *v19;
    *v19 = (ntl::internal::list_node<LUIElement *> *)(*v19)->mp_prev;
    v20->mp_prev = NULL;
    v20->mp_next = NULL;
    v20->m_data = v5;
    ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *>>::insert_before(p_m_listHead, (ntl::internal::list_node<LUIElement *> *)p_m_listHead, v20);
    ++v12;
  }
  if ( v12 != v6->requestedNumChildren && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 604, ASSERT_TYPE_ASSERT, "(numElements == gridData->requestedNumChildren)", (const char *)&queryFormat, "numElements == gridData->requestedNumChildren") )
    __debugbreak();
  v21 = v6->gridContent.m_listHead.m_sentinel.mp_next;
  v22 = 0;
  if ( v21 == (ntl::internal::list_node_base *)v10 )
  {
LABEL_85:
    v35 = (ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *> > *)p_m_listHead->m_sentinel.mp_next;
    if ( v35 != p_m_listHead )
    {
      v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 638, ASSERT_TYPE_ASSERT, "(gridData->scratch.empty())", (const char *)&queryFormat, "gridData->scratch.empty()");
LABEL_91:
      if ( v36 )
        __debugbreak();
      return;
    }
    if ( v35 == (ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *> > *)p_m_listHead->m_sentinel.mp_prev )
      return;
LABEL_89:
    v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev");
    goto LABEL_91;
  }
  v23 = 28i64;
  if ( v6->primaryAxis )
    v23 = 1356i64;
  while ( 1 )
  {
    v24 = 0;
    if ( *(int *)((char *)&v6->buildChildFunction + v23) > 0 )
      break;
LABEL_81:
    ++v22;
    if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 116, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    v21 = v21->mp_next;
    if ( v21 == (ntl::internal::list_node_base *)v10 )
      goto LABEL_85;
  }
  while ( 1 )
  {
    v25 = (ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *> > *)p_m_listHead->m_sentinel.mp_next;
    if ( v25 == p_m_listHead )
      break;
    v26 = p_m_listHead->m_sentinel.mp_next;
    if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 356, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
      __debugbreak();
    v27 = (LUIElement *)v26[1].mp_prev;
    if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    v28 = (ntl::internal::list_node<LUIElement *> **)&v21[2];
    if ( !v21[2].mp_prev )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
      if ( !*v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
    }
    if ( *v28 == (ntl::internal::list_node<LUIElement *> *)v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, v21[1].mp_next) )
      __debugbreak();
    v29 = *v28;
    *v28 = (ntl::internal::list_node<LUIElement *> *)(*v28)->mp_prev;
    v29->mp_prev = NULL;
    v29->mp_next = NULL;
    v29->m_data = v27;
    ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *>>::insert_before((ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *> > *)&v21[3].mp_next, (ntl::internal::list_node<LUIElement *> *)&v21[3].mp_next, v29);
    v30 = (ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *> > *)p_m_listHead->m_sentinel.mp_next;
    if ( v30 == p_m_listHead )
    {
      if ( v30 != (ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *> > *)p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
    }
    v31 = (ntl::internal::list_node<LUIElement *> *)p_m_listHead->m_sentinel.mp_next;
    if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 319, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
      __debugbreak();
    ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *>>::remove(p_m_listHead, v31);
    if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
      __debugbreak();
    v31->mp_prev = (ntl::internal::list_node_base *)v6->scratch.m_freelist.m_head.mp_next;
    v6->scratch.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v31;
    primaryAxis = v6->primaryAxis;
    LUI_PutElementOnTopOfStack(v27, luaVM);
    v33 = v22;
    if ( primaryAxis == VERTICAL )
      v33 = v24;
    j_lua_pushinteger(luaVM, v33);
    j_lua_setfield(luaVM, -2, "_gridContentRowIndex");
    v34 = v22;
    if ( primaryAxis == HORIZONTAL )
      v34 = v24;
    j_lua_pushinteger(luaVM, v34);
    j_lua_setfield(luaVM, -2, "_gridContentColumnIndex");
    j_lua_settop(luaVM, -2);
    if ( ++v24 >= *(int *)((char *)&v6->buildChildFunction + v23) )
    {
      v10 = &v6->gridContent.m_listHead;
      goto LABEL_81;
    }
  }
  if ( v25 != (ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *> > *)p_m_listHead->m_sentinel.mp_prev )
    goto LABEL_89;
}

/*
==============
LUIElement_Grid_MeasureLine
==============
*/
float LUIElement_Grid_MeasureLine(LUIElement *grid, LUIGridData *gridData, LUIGridAxis axis, int lineNumber, lua_State *luaVM)
{
  unsigned __int64 v6; 
  __int64 v7; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<int,float> > *v14; 
  int v15; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<int,float> > *mp_next; 
  char v17; 
  char v19; 
  int v20; 
  ntl::internal::list_node_base *ElementAtPosition_Internal; 
  int v28; 
  ntl::internal::list_node_base *v29; 
  ntl::internal::list_node_base *mp_prev; 
  LUIElementAxisPosition v34; 

  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  v6 = (unsigned int)lineNumber;
  v7 = 28i64;
  if ( axis )
    v7 = 1356i64;
  _RSI = gridData;
  if ( *(int *)((char *)&gridData->buildChildFunction + v7) >= 0 )
  {
    if ( lineNumber < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 711, ASSERT_TYPE_ASSERT, "(lineNumber >= 0)", (const char *)&queryFormat, "lineNumber >= 0") )
      __debugbreak();
    if ( (int)v6 >= *(int *)((char *)&_RSI->buildChildFunction + v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 712, ASSERT_TYPE_ASSERT, "(lineNumber < axisData->numLines)", (const char *)&queryFormat, "lineNumber < axisData->numLines") )
      __debugbreak();
  }
  _RAX = 60i64;
  if ( axis )
    _RAX = 1388i64;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  xmm0, dword ptr [rax+rsi]
    vcomiss xmm0, xmm6
  }
  if ( axis == HORIZONTAL )
  {
    if ( v6 % 0x35 >= 0x35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v14 = &_RSI->xData.sizesCache.storage.m_buckets.m_data[v6 % 0x35];
    v15 = 0;
    mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<int,float> > *)v14->m_listHead.m_sentinel.mp_next;
    if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<int,float> > *)v14->m_listHead.m_sentinel.mp_next == v14 )
    {
LABEL_22:
      mp_next = NULL;
    }
    else
    {
      while ( 1 )
      {
        if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == (_DWORD)v6 )
          break;
        mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<int,float> > *)mp_next->m_listHead.m_sentinel.mp_next;
        if ( mp_next == v14 )
          goto LABEL_22;
      }
    }
    v17 = 0;
    if ( mp_next )
    {
      _RAX = (char *)&mp_next[1].m_listHead.m_sentinel.mp_next + 4;
      __asm { vmovss  xmm6, dword ptr [rax] }
      goto LABEL_55;
    }
    v19 = 0;
    if ( _RSI->buildChildFunction == -2 )
    {
      if ( _RSI->yData.numLines <= 0 )
      {
LABEL_54:
        __asm { vmovaps xmm2, xmm6; value }
        LUICache<int,float,20,ntl::hash<int>>::store(&_RSI->xData.sizesCache, v6, *(float *)&_XMM2);
LABEL_55:
        __asm { vcomiss xmm6, cs:__real@3f800000 }
        if ( v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 780, ASSERT_TYPE_ASSERT, "(lineSize >= 1.f)", (const char *)&queryFormat, "lineSize >= 1.f") )
          __debugbreak();
        __asm { vmovaps xmm0, xmm6 }
        goto LABEL_59;
      }
      do
      {
        v20 = v15;
        if ( _RSI->primaryAxis == HORIZONTAL )
          v20 = v6;
        ElementAtPosition_Internal = LUIElement_Grid_GetElementAtPosition_Internal(_RSI, v20, (int)v6 + v15 - v20);
        _RBX = ElementAtPosition_Internal;
        if ( ElementAtPosition_Internal )
        {
          if ( ((__int64)ElementAtPosition_Internal[5].mp_prev & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 735, ASSERT_TYPE_ASSERT, "(child->currentAnimationState.flags & ( 1 << 0 ))", (const char *)&queryFormat, "child->currentAnimationState.flags & LUI_ANIMSTATE_INITIALIZED") )
            __debugbreak();
          __asm
          {
            vmovups xmm0, xmmword ptr [rbx]
            vmovsd  xmm1, qword ptr [rbx+10h]
            vmovups [rsp+0A8h+var_78], xmm0
            vmovsd  [rsp+0A8h+var_68], xmm1
          }
          *(float *)&_XMM0 = LUI_Measure(&v34);
          __asm { vmaxss  xmm6, xmm0, xmm6 }
          v19 |= (HIDWORD(_RBX[19].mp_next) & 0x2000) != 0;
        }
        ++v15;
      }
      while ( v15 < _RSI->yData.numLines );
    }
    else
    {
      if ( !_RSI->xData.measureLineFunction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 746, ASSERT_TYPE_ASSERT, "(axisData->measureLineFunction)", (const char *)&queryFormat, "axisData->measureLineFunction") )
        __debugbreak();
      if ( !LUI_ElementHasWeakTableEntry(grid, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 747, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( grid, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( grid, luaVM )") )
        __debugbreak();
      LUI_PutElementOnTopOfStack(grid, luaVM);
      j_lua_getfield(luaVM, -1, "_gridFunctionRefs");
      j_lua_rawgeti(luaVM, -1, _RSI->xData.measureLineFunction);
      j_lua_remove(luaVM, -2);
      j_lua_remove(luaVM, -2);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r14d
        vcvtss2sd xmm1, xmm0, xmm0; n
      }
      j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
      LUI_PutElementOnTopOfStack(grid, luaVM);
      v28 = LuaShared_PCall(luaVM, 2, 1);
      if ( v28 )
      {
        LUI_ReportError("Error while measuring UI grid content.\n", luaVM);
        LUI_HandleLuaError(v28);
      }
      if ( !j_lua_isnumber(luaVM, -1) )
        LUI_ReportError("Invalid grid element measurements.\n", luaVM);
      *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
      __asm { vmovaps xmm6, xmm0 }
      j_lua_settop(luaVM, -2);
      v29 = _RSI->gridContent.m_listHead.m_sentinel.mp_next;
      if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      mp_prev = v29[4].mp_prev;
      if ( !mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v19 = (HIDWORD(mp_prev[1].mp_prev[19].mp_next) & 0x2000) != 0;
    }
    v17 = 0;
    if ( v19 )
      goto LABEL_55;
    goto LABEL_54;
  }
LABEL_59:
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  return *(float *)&_XMM0;
}

/*
==============
LUIElement_Grid_MeasureRequestedVisibleContent
==============
*/
float LUIElement_Grid_MeasureRequestedVisibleContent(LUIElement *element, LUIGridData *gridData, LUIGridAxis axis, lua_State *luaVM)
{
  __int64 v13; 
  int v16; 
  int v17; 
  bool v19; 
  int outLastElementIndex[4]; 
  int outFirstElementIndex; 

  if ( gridData->numChildren )
  {
    __asm { vmovaps [rsp+88h+var_48], xmm7 }
    v13 = 16i64;
    if ( axis )
      v13 = 1344i64;
    _RBP = (const LUIGridAxisData *)((char *)gridData + v13);
    __asm { vxorps  xmm2, xmm2, xmm2; referenceLinePosition }
    LUIElement_Grid_ComputeAxisBoundaries(gridData, _RBP, *(double *)&_XMM2, &outFirstElementIndex, outLastElementIndex);
    v16 = outFirstElementIndex;
    v17 = outLastElementIndex[0];
    __asm { vxorps  xmm7, xmm7, xmm7 }
    v19 = outFirstElementIndex == outLastElementIndex[0];
    if ( outFirstElementIndex <= outLastElementIndex[0] )
    {
      __asm { vmovaps [rsp+88h+var_38], xmm6 }
      do
      {
        if ( v19 )
          __asm { vxorps  xmm6, xmm6, xmm6 }
        else
          __asm { vmovss  xmm6, dword ptr [rbp+4] }
        *(float *)&_XMM0 = LUIElement_Grid_MeasureLine(element, gridData, axis, v16++, luaVM);
        __asm
        {
          vaddss  xmm1, xmm0, xmm6
          vaddss  xmm7, xmm7, xmm1
        }
        v19 = v16 == v17;
      }
      while ( v16 <= v17 );
      __asm { vmovaps xmm6, [rsp+88h+var_38] }
    }
    __asm
    {
      vmovaps xmm0, xmm7
      vmovaps xmm7, [rsp+88h+var_48]
    }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
}

/*
==============
LUIElement_Grid_MoveLineFromEndToStart
==============
*/
void LUIElement_Grid_MoveLineFromEndToStart(LUIGridData *gridData, LUIGridAxisData *axisData)
{
  __int64 v3; 
  LUIGridAxis primaryAxis; 
  ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > > *p_m_listHead; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_node_base *mp_prev; 
  char *v8; 
  ntl::internal::list_node_base *v9; 
  ntl::internal::list_node_base *v10; 
  ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > *p_scratch; 
  ntl::internal::list_node_base *v12; 
  ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > *v13; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v14; 
  ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *> > *v15; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v16; 
  ntl::internal::pool_allocator_freelist<72> *p_m_freelist; 
  ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > *v18; 
  __int64 v19; 
  int *v20; 
  __int64 v21; 
  ntl::internal::list_node_base *v22; 
  ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > > *v23; 
  ntl::internal::list_node_base **p_mp_next; 
  ntl::internal::list_node_base *v25; 
  ntl::internal::list_node_base *v26; 
  ntl::internal::list_node<LUIElement *> *v27; 
  LUIElement *m_data; 
  ntl::internal::list_node_base *v29; 
  ntl::internal::list_node<LUIElement *> *v30; 
  ntl::internal::list_node<LUIElement *> **v31; 
  ntl::internal::list_node<LUIElement *> *v32; 
  ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > > *v33; 

  v3 = 16i64;
  if ( gridData->secondaryAxis )
    v3 = 1344i64;
  if ( axisData == (LUIGridAxisData *)((char *)gridData + v3) )
  {
    primaryAxis = gridData->primaryAxis;
    p_m_listHead = &gridData->gridContent.m_listHead;
    mp_next = gridData->gridContent.m_listHead.m_sentinel.mp_next;
    if ( mp_next == (ntl::internal::list_node_base *)&gridData->gridContent.m_listHead )
    {
      if ( mp_next != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 151, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
    }
    mp_prev = p_m_listHead->m_sentinel.mp_prev;
    if ( !p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 372, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
      __debugbreak();
    v8 = (char *)mp_prev[2].mp_next;
    v9 = gridData->gridContent.m_listHead.m_sentinel.mp_next;
    if ( v9 == (ntl::internal::list_node_base *)p_m_listHead )
    {
      if ( v9 != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 151, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
    }
    v10 = p_m_listHead->m_sentinel.mp_prev;
    if ( !p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 372, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
      __debugbreak();
    p_scratch = &gridData->scratch;
    ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>>::assign<ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>>(&gridData->scratch, (const ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > *)&v10[1]);
    v12 = gridData->gridContent.m_listHead.m_sentinel.mp_next;
    if ( v12 == (ntl::internal::list_node_base *)p_m_listHead )
    {
      if ( v12 != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 151, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
    }
    v13 = (ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > *)p_m_listHead->m_sentinel.mp_prev;
    if ( !p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 345, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
      __debugbreak();
    ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>>>>::remove(&gridData->gridContent.m_listHead, v13);
    v14 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v13->m_data.m_listHead.m_sentinel.mp_next;
    v15 = &v13->m_data.m_listHead;
    if ( v14 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)&v13->m_data.m_listHead )
    {
      do
      {
        v16 = v14[1].mp_next;
        v14->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v13->m_data.m_freelist.m_head;
        v13->m_data.m_freelist.m_head.mp_next = v14;
        v14 = v16;
      }
      while ( v16 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v15 );
    }
    v15->m_sentinel.mp_prev = &v15->m_sentinel;
    v13->m_data.m_listHead.m_sentinel.mp_next = &v13->m_data.m_listHead.m_sentinel;
    ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>>::~container_with_allocator<ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>>(&v13->m_data);
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
      __debugbreak();
    p_m_freelist = &gridData->gridContent.m_freelist;
    v13->mp_prev = (ntl::internal::list_node_base *)gridData->gridContent.m_freelist.m_head.mp_next;
    gridData->gridContent.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v13;
    if ( v13 == (ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > *)&gridData->gridContent.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x48ui64, gridData->gridContent.m_data.m_size) )
      __debugbreak();
    v18 = (ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > *)p_m_freelist->m_head.mp_next;
    p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
    v18->mp_prev = NULL;
    v18->mp_next = NULL;
    v18->m_data.m_data.m_buffer = NULL;
    v18->m_data.m_data.m_size = 0i64;
    v18->m_data.m_data.m_buffer = NULL;
    v18->m_data.m_data.m_size = 0i64;
    v18->m_data.m_listHead.m_sentinel.mp_prev = &v18->m_data.m_listHead.m_sentinel;
    v18->m_data.m_listHead.m_sentinel.mp_next = &v18->m_data.m_listHead.m_sentinel;
    ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>>>>::insert_before(&gridData->gridContent.m_listHead, (ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > *)gridData->gridContent.m_listHead.m_sentinel.mp_next, v18);
    v18->m_data.m_data.m_buffer = NULL;
    v18->m_data.m_data.m_size = 0i64;
    v18->m_data.m_data.m_buffer = NULL;
    v18->m_data.m_data.m_size = 0i64;
    v18->m_data.m_listHead.m_sentinel.mp_prev = &v18->m_data.m_listHead.m_sentinel;
    v18->m_data.m_listHead.m_sentinel.mp_next = &v18->m_data.m_listHead.m_sentinel;
    v19 = 36i64;
    if ( primaryAxis )
      v19 = 1364i64;
    v20 = (int *)((char *)&gridData->buildChildFunction + v19);
    v21 = 24i64 * *v20;
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 71, ASSERT_TYPE_ASSERT, "( p_buffer_start )", (const char *)&queryFormat, "p_buffer_start") )
      __debugbreak();
    v18->m_data.m_data.m_buffer = v8;
    v18->m_data.m_data.m_size = v21;
    ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>::reserve(&v18->m_data, *v20);
    ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>>::assign<ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>>(&v18->m_data, p_scratch);
    --axisData->firstVisibleLine;
  }
  else
  {
    v22 = gridData->gridContent.m_listHead.m_sentinel.mp_next;
    v23 = &gridData->gridContent.m_listHead;
    v33 = &gridData->gridContent.m_listHead;
    if ( v22 == (ntl::internal::list_node_base *)&gridData->gridContent.m_listHead )
    {
      --axisData->firstVisibleLine;
    }
    else
    {
      do
      {
        if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        p_mp_next = &v22[3].mp_next;
        v25 = v22[4].mp_prev;
        if ( v25 == (ntl::internal::list_node_base *)&v22[3].mp_next )
        {
          if ( v25 != *p_mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
            __debugbreak();
        }
        else
        {
          if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          v26 = v22[4].mp_prev;
          if ( v26 == (ntl::internal::list_node_base *)p_mp_next )
          {
            if ( v26 != *p_mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
              __debugbreak();
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 151, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
              __debugbreak();
          }
          v27 = (ntl::internal::list_node<LUIElement *> *)*p_mp_next;
          if ( !*p_mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 372, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
            __debugbreak();
          m_data = v27->m_data;
          if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          v29 = v22[4].mp_prev;
          if ( v29 == (ntl::internal::list_node_base *)p_mp_next )
          {
            if ( v29 != *p_mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
              __debugbreak();
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 151, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
              __debugbreak();
          }
          v30 = (ntl::internal::list_node<LUIElement *> *)*p_mp_next;
          if ( !*p_mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 345, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
            __debugbreak();
          ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *>>::remove((ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *> > *)&v22[3].mp_next, v30);
          if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
            __debugbreak();
          v31 = (ntl::internal::list_node<LUIElement *> **)&v22[2];
          v30->mp_prev = v22[2].mp_prev;
          v22[2].mp_prev = v30;
          if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
          if ( !*v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
          if ( *v31 == (ntl::internal::list_node<LUIElement *> *)v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, v22[1].mp_next) )
            __debugbreak();
          v32 = *v31;
          *v31 = (ntl::internal::list_node<LUIElement *> *)(*v31)->mp_prev;
          v32->mp_prev = NULL;
          v32->mp_next = NULL;
          v32->m_data = m_data;
          ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *>>::insert_before((ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *> > *)&v22[3].mp_next, (ntl::internal::list_node<LUIElement *> *)v22[4].mp_prev, v32);
          v23 = v33;
        }
        if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 116, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        v22 = v22->mp_next;
      }
      while ( v22 != (ntl::internal::list_node_base *)v23 );
      --axisData->firstVisibleLine;
    }
  }
}

/*
==============
LUIElement_Grid_MoveLineFromStartToEnd
==============
*/
void LUIElement_Grid_MoveLineFromStartToEnd(LUIGridData *gridData, LUIGridAxisData *axisData)
{
  __int64 v3; 
  ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > > *p_m_listHead; 
  LUIGridAxis primaryAxis; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_node_base *v7; 
  char *v8; 
  ntl::internal::list_node_base *v9; 
  ntl::internal::list_node_base *v10; 
  ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > *p_scratch; 
  ntl::internal::list_node_base *v12; 
  ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > *v13; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v14; 
  ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *> > *v15; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v16; 
  ntl::internal::pool_allocator_freelist<72> *p_m_freelist; 
  ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > *v18; 
  __int64 v19; 
  int *v20; 
  __int64 v21; 
  ntl::internal::list_node_base *v22; 
  ntl::internal::list_node_base **p_mp_next; 
  ntl::internal::list_node_base *mp_prev; 
  ntl::internal::list_node_base *v25; 
  ntl::internal::list_node_base *v26; 
  LUIElement *v27; 
  ntl::internal::list_node_base *v28; 
  ntl::internal::list_node<LUIElement *> *v29; 
  ntl::internal::list_node<LUIElement *> **v30; 
  ntl::internal::list_node<LUIElement *> *v31; 
  ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > > *v32; 

  v3 = 16i64;
  if ( gridData->secondaryAxis )
    v3 = 1344i64;
  p_m_listHead = &gridData->gridContent.m_listHead;
  if ( axisData == (LUIGridAxisData *)((char *)gridData + v3) )
  {
    primaryAxis = gridData->primaryAxis;
    mp_next = gridData->gridContent.m_listHead.m_sentinel.mp_next;
    if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
    {
      if ( mp_next != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
    }
    v7 = gridData->gridContent.m_listHead.m_sentinel.mp_next;
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 356, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
      __debugbreak();
    v8 = (char *)v7[2].mp_next;
    v9 = gridData->gridContent.m_listHead.m_sentinel.mp_next;
    if ( v9 == (ntl::internal::list_node_base *)p_m_listHead )
    {
      if ( v9 != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
    }
    v10 = gridData->gridContent.m_listHead.m_sentinel.mp_next;
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 356, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
      __debugbreak();
    p_scratch = &gridData->scratch;
    ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>>::assign<ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>>(&gridData->scratch, (const ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > *)&v10[1]);
    v12 = gridData->gridContent.m_listHead.m_sentinel.mp_next;
    if ( v12 == (ntl::internal::list_node_base *)p_m_listHead )
    {
      if ( v12 != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
    }
    v13 = (ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > *)gridData->gridContent.m_listHead.m_sentinel.mp_next;
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 319, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
      __debugbreak();
    ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>>>>::remove(&gridData->gridContent.m_listHead, v13);
    v14 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v13->m_data.m_listHead.m_sentinel.mp_next;
    v15 = &v13->m_data.m_listHead;
    if ( v14 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)&v13->m_data.m_listHead )
    {
      do
      {
        v16 = v14[1].mp_next;
        v14->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v13->m_data.m_freelist.m_head;
        v13->m_data.m_freelist.m_head.mp_next = v14;
        v14 = v16;
      }
      while ( v16 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v15 );
    }
    v15->m_sentinel.mp_prev = &v15->m_sentinel;
    v13->m_data.m_listHead.m_sentinel.mp_next = &v13->m_data.m_listHead.m_sentinel;
    ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>>::~container_with_allocator<ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>>(&v13->m_data);
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
      __debugbreak();
    p_m_freelist = &gridData->gridContent.m_freelist;
    v13->mp_prev = (ntl::internal::list_node_base *)gridData->gridContent.m_freelist.m_head.mp_next;
    gridData->gridContent.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v13;
    if ( v13 == (ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > *)&gridData->gridContent.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x48ui64, gridData->gridContent.m_data.m_size) )
      __debugbreak();
    v18 = (ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > *)p_m_freelist->m_head.mp_next;
    p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
    v18->mp_prev = NULL;
    v18->mp_next = NULL;
    v18->m_data.m_data.m_buffer = NULL;
    v18->m_data.m_data.m_size = 0i64;
    v18->m_data.m_data.m_buffer = NULL;
    v18->m_data.m_data.m_size = 0i64;
    v18->m_data.m_listHead.m_sentinel.mp_prev = &v18->m_data.m_listHead.m_sentinel;
    v18->m_data.m_listHead.m_sentinel.mp_next = &v18->m_data.m_listHead.m_sentinel;
    ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>>>>::insert_before(&gridData->gridContent.m_listHead, (ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > *)&gridData->gridContent.m_listHead, v18);
    v18->m_data.m_data.m_buffer = NULL;
    v18->m_data.m_data.m_size = 0i64;
    v18->m_data.m_data.m_buffer = NULL;
    v18->m_data.m_data.m_size = 0i64;
    v18->m_data.m_listHead.m_sentinel.mp_prev = &v18->m_data.m_listHead.m_sentinel;
    v18->m_data.m_listHead.m_sentinel.mp_next = &v18->m_data.m_listHead.m_sentinel;
    v19 = 36i64;
    if ( primaryAxis )
      v19 = 1364i64;
    v20 = (int *)((char *)&gridData->buildChildFunction + v19);
    v21 = 24i64 * *v20;
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 71, ASSERT_TYPE_ASSERT, "( p_buffer_start )", (const char *)&queryFormat, "p_buffer_start") )
      __debugbreak();
    v18->m_data.m_data.m_buffer = v8;
    v18->m_data.m_data.m_size = v21;
    ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>::reserve(&v18->m_data, *v20);
    ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>>::assign<ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>>(&v18->m_data, p_scratch);
    ++axisData->firstVisibleLine;
  }
  else
  {
    v22 = gridData->gridContent.m_listHead.m_sentinel.mp_next;
    v32 = &gridData->gridContent.m_listHead;
    if ( v22 == (ntl::internal::list_node_base *)p_m_listHead )
    {
      ++axisData->firstVisibleLine;
    }
    else
    {
      do
      {
        if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        p_mp_next = &v22[3].mp_next;
        mp_prev = v22[4].mp_prev;
        if ( mp_prev == (ntl::internal::list_node_base *)&v22[3].mp_next )
        {
          if ( mp_prev != *p_mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
            __debugbreak();
        }
        else
        {
          if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          v25 = v22[4].mp_prev;
          if ( v25 == (ntl::internal::list_node_base *)p_mp_next )
          {
            if ( v25 != *p_mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
              __debugbreak();
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
              __debugbreak();
          }
          v26 = v22[4].mp_prev;
          if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 356, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
            __debugbreak();
          v27 = (LUIElement *)v26[1].mp_prev;
          if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          v28 = v22[4].mp_prev;
          if ( v28 == (ntl::internal::list_node_base *)p_mp_next )
          {
            if ( v28 != *p_mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
              __debugbreak();
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
              __debugbreak();
          }
          v29 = (ntl::internal::list_node<LUIElement *> *)v22[4].mp_prev;
          if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 319, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
            __debugbreak();
          ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *>>::remove((ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *> > *)&v22[3].mp_next, v29);
          if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
            __debugbreak();
          v30 = (ntl::internal::list_node<LUIElement *> **)&v22[2];
          v29->mp_prev = v22[2].mp_prev;
          v22[2].mp_prev = v29;
          if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
          if ( !*v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
          if ( *v30 == (ntl::internal::list_node<LUIElement *> *)v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, v22[1].mp_next) )
            __debugbreak();
          v31 = *v30;
          *v30 = (ntl::internal::list_node<LUIElement *> *)(*v30)->mp_prev;
          v31->mp_prev = NULL;
          v31->mp_next = NULL;
          v31->m_data = v27;
          ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *>>::insert_before((ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *> > *)&v22[3].mp_next, (ntl::internal::list_node<LUIElement *> *)&v22[3].mp_next, v31);
          p_m_listHead = v32;
        }
        if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 116, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        v22 = v22->mp_next;
      }
      while ( v22 != (ntl::internal::list_node_base *)p_m_listHead );
      ++axisData->firstVisibleLine;
    }
  }
}

/*
==============
LUIElement_Grid_OverrideAnimationState
==============
*/

void __fastcall LUIElement_Grid_OverrideAnimationState(LUIGridAxis axis, LUIElement *child, LUIAnimationState *state, double position)
{
  LUIElementAxisPosition v15; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBX = state;
  __asm { vmovaps xmm6, xmm3 }
  if ( axis )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdx+18h]
      vmovsd  xmm1, qword ptr [rdx+28h]
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdx]
      vmovsd  xmm1, qword ptr [rdx+10h]
    }
  }
  __asm
  {
    vmovups [rsp+58h+var_38], xmm0
    vmovsd  [rsp+58h+var_28], xmm1
  }
  *(float *)&_XMM0 = LUI_Measure(&v15);
  __asm
  {
    vmovaps xmm1, xmm0
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm0, xmm0, xmm6
  }
  if ( axis )
  {
    __asm
    {
      vmovss  dword ptr [rbx+18h], xmm6
      vmovss  dword ptr [rbx+1Ch], xmm0
    }
    _RBX->position.y.anchors[0] = 0.0;
    _RBX->position.y.anchors[1] = 1.0;
  }
  else
  {
    __asm
    {
      vmovss  dword ptr [rbx], xmm6
      vmovss  dword ptr [rbx+4], xmm0
    }
    _RBX->position.x.anchors[0] = 0.0;
    _RBX->position.x.anchors[1] = 1.0;
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
    vmovaps xmm6, [rsp+58h+var_18]
  }
}

/*
==============
LUIElement_Grid_PopulateChildren
==============
*/
void LUIElement_Grid_PopulateChildren(LUIElement *element, LUIGridData *gridData, lua_State *luaVM)
{
  __int64 v6; 
  __int64 v7; 
  LUIElement *firstChild; 
  char *v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 

  LUIElement_Grid_SetupDisplayList(element, gridData);
  if ( gridData->buildChildFunction != -2 )
  {
    v6 = 48i64;
    v7 = 16i64;
    if ( gridData->primaryAxis )
      v7 = 1344i64;
    firstChild = element->firstChild;
    v9 = (char *)gridData + v7;
    if ( gridData->secondaryAxis )
      v6 = 1376i64;
    v10 = *((_DWORD *)v9 + 8);
    v11 = *(int *)((char *)&gridData->buildChildFunction + v6);
    if ( firstChild )
    {
      while ( 1 )
      {
        v12 = v11;
        v13 = v10;
        LUIElement_Grid_RefreshChildContent(element, firstChild, v10, v11, luaVM);
        firstChild = firstChild->nextSibling;
        if ( !firstChild )
          break;
        v14 = *((_DWORD *)v9 + 9);
        if ( v10 == v14 )
        {
          v10 = *((_DWORD *)v9 + 8);
          ++v11;
          if ( v13 != v14 )
            v11 = v12;
        }
        else
        {
          ++v10;
          ++v11;
          if ( v13 != v14 )
            v11 = v12;
        }
      }
    }
  }
}

/*
==============
LUIElement_Grid_RefreshChildContent
==============
*/
void LUIElement_Grid_RefreshChildContent(LUIElement *grid, LUIElement *child, int primaryPosition, int secondaryPosition, lua_State *luaVM)
{
  LUIGridData *customElementData; 
  int v11; 
  bool v12; 
  int v19; 

  if ( !grid->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (LUIGridData *)grid->customElementData;
  if ( customElementData->buildChildFunction == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 2346, ASSERT_TYPE_ASSERT, "(!LUIElement_Grid_UserSuppliesChildren( gridData ))", (const char *)&queryFormat, "!LUIElement_Grid_UserSuppliesChildren( gridData )") )
    __debugbreak();
  if ( LUIElement_Grid_IsPositionInDataSet_0(customElementData, primaryPosition, secondaryPosition) )
  {
    v11 = secondaryPosition;
    if ( customElementData->primaryAxis )
    {
      v11 = primaryPosition;
      primaryPosition = secondaryPosition;
    }
    if ( (!LUI_ElementHasWeakTableEntry(child, luaVM) || !LUI_ElementHasWeakTableEntry(grid, luaVM)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 2364, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( child, luaVM ) && LUI_ElementHasWeakTableEntry( grid, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( child, luaVM ) && LUI_ElementHasWeakTableEntry( grid, luaVM )") )
      __debugbreak();
    LUI_PutElementOnTopOfStack(child, luaVM);
    j_lua_getfield(luaVM, -1, "_gridContentRowIndex");
    if ( j_lua_isnumber(luaVM, -1) )
      v12 = lui_tointeger32(luaVM, -1) != v11;
    else
      v12 = 1;
    j_lua_settop(luaVM, -2);
    j_lua_getfield(luaVM, -1, "_gridContentColumnIndex");
    if ( !j_lua_isnumber(luaVM, -1) || v12 || lui_tointeger32(luaVM, -1) != primaryPosition )
      v12 = 1;
    j_lua_settop(luaVM, -2);
    j_lua_settop(luaVM, -2);
    if ( v12 && customElementData->refreshChildFunction != -2 )
    {
      LUI_PutElementOnTopOfStack(child, luaVM);
      j_lua_pushinteger(luaVM, v11);
      j_lua_setfield(luaVM, -2, "_gridContentRowIndex");
      j_lua_pushinteger(luaVM, primaryPosition);
      j_lua_setfield(luaVM, -2, "_gridContentColumnIndex");
      j_lua_settop(luaVM, -2);
      LUI_PutElementOnTopOfStack(grid, luaVM);
      j_lua_getfield(luaVM, -1, "_gridFunctionRefs");
      j_lua_rawgeti(luaVM, -1, customElementData->refreshChildFunction);
      j_lua_remove(luaVM, -2);
      j_lua_remove(luaVM, -2);
      LUI_PutElementOnTopOfStack(child, luaVM);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edi
        vcvtss2sd xmm1, xmm0, xmm0; n
      }
      j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r15d
        vcvtss2sd xmm1, xmm0, xmm0; n
      }
      j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
      v19 = LuaShared_PCall(luaVM, 3, 0);
      if ( v19 )
      {
        LUI_ReportError("Error while updating UI grid content.\n", luaVM);
        LUI_HandleLuaError(v19);
      }
    }
  }
}

/*
==============
LUIElement_Grid_RemoveExcessChildren
==============
*/
void LUIElement_Grid_RemoveExcessChildren(LUIElement *grid, LUIGridData *gridData, lua_State *luaVM)
{
  int v4; 
  ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > > *p_m_listHead; 
  ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > > *v8; 
  ntl::internal::list_node_base *mp_prev; 
  ntl::internal::list_node_base *v10; 
  ntl::internal::list_node_base *v11; 
  ntl::internal::list_node_base *v12; 
  LUIElement *v13; 
  ntl::internal::list_node_base *v14; 
  ntl::internal::list_node<LUIElement *> *v15; 
  ntl::internal::list_node<LUIElement *> **p_mp_next; 
  ntl::internal::list_node<LUIElement *> *v17; 
  ntl::internal::list_node_base *v18; 
  ntl::internal::list_node_base *v19; 
  ntl::internal::list_node_base *v20; 
  ntl::internal::list_node_base *v21; 

  v4 = gridData->maxNumChildren - gridData->requestedNumChildren;
  if ( v4 > 0 )
  {
    p_m_listHead = &gridData->gridContent.m_listHead;
    if ( &gridData->gridContent.m_listHead == (ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > > *)gridData->gridContent.m_listHead.m_sentinel.mp_next )
    {
LABEL_59:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 1918, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "LUIGrid: Unable to delete all excess elements") )
        __debugbreak();
    }
    else
    {
      v8 = &gridData->gridContent.m_listHead;
      while ( 1 )
      {
        if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 124, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        mp_prev = v8->m_sentinel.mp_prev;
        if ( !mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        v10 = mp_prev[4].mp_prev;
        v11 = (ntl::internal::list_node_base *)((char *)mp_prev + 56);
        if ( v10 == v11 )
        {
          if ( v10 != v11->mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 151, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
            __debugbreak();
        }
        v12 = v11->mp_prev;
        if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 372, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
          __debugbreak();
        v13 = (LUIElement *)v12[1].mp_prev;
        if ( v13 )
          break;
LABEL_55:
        if ( !p_m_listHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 124, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        v8 = (ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > > *)p_m_listHead->m_sentinel.mp_prev;
        p_m_listHead = v8;
        if ( v8 == (ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > > *)gridData->gridContent.m_listHead.m_sentinel.mp_next )
          goto LABEL_59;
      }
      while ( 1 )
      {
        LUI_LUIElement_RemoveStrongReference(grid, v13, luaVM);
        v13->parent = NULL;
        if ( !p_m_listHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 124, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        v14 = p_m_listHead->m_sentinel.mp_prev;
        if ( !p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        v15 = (ntl::internal::list_node<LUIElement *> *)v14[4].mp_prev;
        p_mp_next = (ntl::internal::list_node<LUIElement *> **)&v14[3].mp_next;
        if ( v15 == (ntl::internal::list_node<LUIElement *> *)&v14[3].mp_next )
        {
          if ( v15 != *p_mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 151, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
            __debugbreak();
        }
        v17 = *p_mp_next;
        if ( !*p_mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 345, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
          __debugbreak();
        ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *>>::remove((ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *> > *)&v14[3].mp_next, v17);
        if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
          __debugbreak();
        --v4;
        v17->mp_prev = v14[2].mp_prev;
        v14[2].mp_prev = v17;
        if ( v4 <= 0 )
          break;
        if ( !p_m_listHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 124, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        v18 = p_m_listHead->m_sentinel.mp_prev;
        if ( !p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        v19 = v18[4].mp_prev;
        v20 = (ntl::internal::list_node_base *)((char *)v18 + 56);
        if ( v19 == v20 )
        {
          if ( v19 != v20->mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 151, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
            __debugbreak();
        }
        v21 = v20->mp_prev;
        if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 372, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
          __debugbreak();
        v13 = (LUIElement *)v21[1].mp_prev;
        if ( !v13 )
          goto LABEL_55;
      }
      gridData->maxNumChildren = gridData->requestedNumChildren;
    }
  }
}

/*
==============
LUIElement_Grid_SetDefaultTargetPosition
==============
*/
void LUIElement_Grid_SetDefaultTargetPosition(LUIElement *grid, LUIGridData *gridData, LUIGridAxis axis, lua_State *luaVM)
{
  __int64 v7; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  v7 = 1340i64;
  if ( axis )
    v7 = 2668i64;
  if ( *((_BYTE *)&gridData->buildChildFunction + v7) )
  {
    if ( *((_BYTE *)&gridData->buildChildFunction + v7) == 1 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rax+rdx]
        vmulss  xmm6, xmm0, cs:__real@3f000000
      }
    }
    else
    {
      __asm { vxorps  xmm6, xmm6, xmm6 }
      if ( *((_BYTE *)&gridData->buildChildFunction + v7) == 2 )
      {
        __asm { vcvtsi2ss xmm6, xmm6, dword ptr [rax+rdx] }
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 1241, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected alignment") )
      {
        __debugbreak();
      }
    }
  }
  else
  {
    __asm { vxorps  xmm6, xmm6, xmm6 }
  }
  __asm { vmovaps xmm3, xmm6; targetPosition }
  LUIElement_Grid_SetTargetPosition(grid, gridData, axis, *(float *)&_XMM3, 1, 1, luaVM);
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
LUIElement_Grid_SetDimensions
==============
*/

void __fastcall LUIElement_Grid_SetDimensions(LUIElement *grid, LUIGridData *gridData, lua_State *luaVM, double _XMM3_8)
{
  int requestedNumChildren; 
  LUIGridAxis primaryAxis; 
  LUIGridAxis secondaryAxis; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  int v18; 
  __int64 v19; 
  __int64 v20; 
  int v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  int v37; 
  __int64 v46; 
  __int64 v47; 
  bool v48; 
  __int64 v49; 
  __int64 v50; 
  __int64 v51; 

  requestedNumChildren = gridData->requestedNumChildren;
  primaryAxis = gridData->primaryAxis;
  secondaryAxis = gridData->secondaryAxis;
  if ( !requestedNumChildren )
    goto LABEL_68;
  v11 = 24i64;
  v12 = 24i64;
  if ( primaryAxis )
    v12 = 1352i64;
  v13 = *(int *)((char *)&gridData->buildChildFunction + v12);
  if ( !v13 )
    goto LABEL_68;
  if ( secondaryAxis )
    v11 = 1352i64;
  v14 = *(int *)((char *)&gridData->buildChildFunction + v11);
  if ( !v14 )
  {
LABEL_68:
    v15 = 28i64;
    v46 = 28i64;
    if ( primaryAxis )
      v46 = 1356i64;
    v18 = 0;
    *(int *)((char *)&gridData->buildChildFunction + v46) = 0;
    v47 = 28i64;
    if ( secondaryAxis )
      v47 = 1356i64;
    *(int *)((char *)&gridData->buildChildFunction + v47) = 0;
    goto LABEL_73;
  }
  if ( requestedNumChildren < 0 )
    goto LABEL_20;
  if ( v13 >= 0 )
  {
    if ( v14 >= 0 )
    {
      if ( requestedNumChildren <= v13 * (v14 - 1) )
        j_luaL_error(luaVM, (const char *)&queryFormat, "gridData->requestedNumChildren > primaryAxisData->requestedNumLines * ( secondaryAxisData->requestedNumLines -1 )");
      if ( requestedNumChildren > v14 * v13 )
        j_luaL_error(luaVM, (const char *)&queryFormat, "gridData->requestedNumChildren <= primaryAxisData->requestedNumLines * ( secondaryAxisData->requestedNumLines )");
      v15 = 28i64;
      v16 = 28i64;
      if ( primaryAxis )
        v16 = 1356i64;
      v17 = 28i64;
      if ( secondaryAxis )
        v17 = 1356i64;
      *(int *)((char *)&gridData->buildChildFunction + v16) = v13;
      *(int *)((char *)&gridData->buildChildFunction + v17) = *(int *)((char *)&gridData->buildChildFunction + v11);
      v18 = gridData->requestedNumChildren;
      goto LABEL_73;
    }
LABEL_20:
    if ( v13 >= 0 && v14 >= 0 )
    {
      v15 = 28i64;
      v19 = 28i64;
      if ( primaryAxis )
        v19 = 1356i64;
      v20 = 28i64;
      if ( secondaryAxis )
        v20 = 1356i64;
      *(int *)((char *)&gridData->buildChildFunction + v19) = v13;
      v21 = *(int *)((char *)&gridData->buildChildFunction + v11);
      *(int *)((char *)&gridData->buildChildFunction + v20) = v21;
      v18 = v21 * *(int *)((char *)&gridData->buildChildFunction + v19);
      goto LABEL_73;
    }
  }
  if ( requestedNumChildren >= 0 )
  {
    if ( v13 >= 0 )
    {
      v15 = 28i64;
      v22 = 28i64;
      if ( v13 < requestedNumChildren )
        requestedNumChildren = v13;
      if ( primaryAxis )
        v22 = 1356i64;
      *(int *)((char *)&gridData->buildChildFunction + v22) = requestedNumChildren;
      v23 = 28i64;
      if ( secondaryAxis )
        v23 = 1356i64;
LABEL_43:
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, dword ptr [rbx+0A74h]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vdivss  xmm2, xmm1, xmm0
        vxorps  xmm3, xmm3, xmm3
        vroundss xmm3, xmm3, xmm2, 2
        vcvttss2si edx, xmm3
      }
      *(int *)((char *)&gridData->buildChildFunction + v23) = _EDX;
      v18 = gridData->requestedNumChildren;
      goto LABEL_73;
    }
    if ( v14 >= 0 )
    {
      v15 = 28i64;
      v24 = 28i64;
      if ( v14 < requestedNumChildren )
        requestedNumChildren = v14;
      if ( secondaryAxis )
        v24 = 1356i64;
      *(int *)((char *)&gridData->buildChildFunction + v24) = requestedNumChildren;
      v23 = 28i64;
      if ( primaryAxis )
        v23 = 1356i64;
      goto LABEL_43;
    }
  }
  v15 = 28i64;
  v33 = 28i64;
  if ( secondaryAxis )
    v33 = 1356i64;
  v34 = 28i64;
  if ( primaryAxis )
    v34 = 1356i64;
  if ( requestedNumChildren < 0 )
  {
    if ( v13 < 0 )
    {
      if ( v14 < 0 )
      {
        v18 = -1;
        *(int *)((char *)&gridData->buildChildFunction + v34) = -1;
        *(int *)((char *)&gridData->buildChildFunction + v33) = -1;
      }
      else
      {
        *(int *)((char *)&gridData->buildChildFunction + v33) = v14;
        *(int *)((char *)&gridData->buildChildFunction + v34) = -1;
        v18 = -(*(int *)((char *)&gridData->buildChildFunction + v33) != 0);
      }
    }
    else
    {
      *(int *)((char *)&gridData->buildChildFunction + v34) = v13;
      *(int *)((char *)&gridData->buildChildFunction + v33) = -1;
      v18 = -(*(int *)((char *)&gridData->buildChildFunction + v34) != 0);
    }
  }
  else
  {
    v35 = 32i64;
    v36 = 32i64;
    if ( primaryAxis )
      v36 = 1360i64;
    v37 = *(int *)((char *)&gridData->buildChildFunction + v36);
    if ( v37 == 1 )
    {
      *(int *)((char *)&gridData->buildChildFunction + v34) = 1;
      *(int *)((char *)&gridData->buildChildFunction + v33) = gridData->requestedNumChildren;
      v18 = gridData->requestedNumChildren;
    }
    else
    {
      if ( secondaryAxis )
        v35 = 1360i64;
      if ( *(int *)((char *)&gridData->buildChildFunction + v35) == 1 )
      {
        *(int *)((char *)&gridData->buildChildFunction + v34) = requestedNumChildren;
        *(int *)((char *)&gridData->buildChildFunction + v33) = 1;
        v18 = gridData->requestedNumChildren;
      }
      else
      {
        if ( v37 < requestedNumChildren )
          requestedNumChildren = *(int *)((char *)&gridData->buildChildFunction + v36);
        *(int *)((char *)&gridData->buildChildFunction + v34) = requestedNumChildren;
        if ( requestedNumChildren )
        {
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, dword ptr [rbx+0A74h]
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, ecx
            vdivss  xmm2, xmm1, xmm0
            vxorps  xmm3, xmm3, xmm3
            vroundss xmm3, xmm3, xmm2, 2
            vcvttss2si edx, xmm3
          }
          *(int *)((char *)&gridData->buildChildFunction + v33) = _EDX;
        }
        else
        {
          *(int *)((char *)&gridData->buildChildFunction + v33) = 0;
        }
        v18 = gridData->requestedNumChildren;
      }
    }
  }
LABEL_73:
  gridData->numChildren = v18;
  v48 = gridData->buildChildFunction == -2;
  gridData->pendingDimensionUpdate = 1;
  if ( v48 )
  {
    v49 = 36i64;
    v50 = 36i64;
    v51 = 28i64;
    if ( primaryAxis )
    {
      v50 = 1364i64;
      v51 = 1356i64;
    }
    if ( *(int *)((char *)&gridData->buildChildFunction + v51) > *(int *)((char *)&gridData->buildChildFunction + v50) )
      j_luaL_error(luaVM, (const char *)&queryFormat, "primaryAxisData->numLines <= primaryAxisData->managedLines");
    if ( secondaryAxis )
      v49 = 1364i64;
    if ( secondaryAxis )
      v15 = 1356i64;
    if ( *(int *)((char *)&gridData->buildChildFunction + v15) > *(int *)((char *)&gridData->buildChildFunction + v49) )
      j_luaL_error(luaVM, (const char *)&queryFormat, "secondaryAxisData->numLines <= secondaryAxisData->managedLines");
  }
}

/*
==============
LUIElement_Grid_SetMaxVisible
==============
*/
__int64 LUIElement_Grid_SetMaxVisible(LUIGridAxis axis, lua_State *luaVM)
{
  LUIElement *v4; 
  LUIGridData *GridData; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  int v9; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetMaxVisibleRows( numRows ) or element:SetMaxVisibleColumns( numColumns )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v4 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v4, luaVM);
    v6 = lui_tointeger32(luaVM, 2);
    v7 = 32i64;
    if ( axis )
      v7 = 1360i64;
    *(int *)((char *)&GridData->buildChildFunction + v7) = v6;
    v8 = 36i64;
    if ( axis )
      v8 = 1364i64;
    *(int *)((char *)&GridData->buildChildFunction + v8) = v6 + 1;
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  j_lua_pushboolean(luaVM, v9);
  return 1i64;
}

/*
==============
LUIElement_Grid_SetMeasureLineFunction
==============
*/
__int64 LUIElement_Grid_SetMeasureLineFunction(LUIGridAxis axis, lua_State *luaVM)
{
  LUIElement *v4; 
  LUIGridData *GridData; 
  int v6; 
  __int64 v7; 
  __int64 v8; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 6 )
    j_luaL_error(luaVM, "USAGE: element:SetMeasureRowFunction( measureRow ) or element:SetMeasureColumnFunction( measureColumn )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_type(luaVM, 2) == 6 )
  {
    v4 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v4, luaVM);
    j_lua_getfield(luaVM, 1, "_gridFunctionRefs");
    j_lua_insert(luaVM, 2);
    v6 = j_luaL_ref(luaVM, -2);
    v7 = 1336i64;
    if ( axis )
      v7 = 2664i64;
    *(int *)((char *)&GridData->buildChildFunction + v7) = v6;
    j_lua_settop(luaVM, -2);
    v8 = 60i64;
    if ( axis )
      v8 = 1388i64;
    *(int *)((char *)&GridData->buildChildFunction + v8) = 0;
  }
  return 0i64;
}

/*
==============
LUIElement_Grid_SetNumChildrenInC_impl
==============
*/
__int64 LUIElement_Grid_SetNumChildrenInC_impl(lua_State *const luaVM, __int64 a2, __int64 a3, double a4)
{
  LUIElement *v5; 
  LUIGridData *GridData; 

  if ( (j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2)) && (j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_type(luaVM, 3) != 1) )
    j_luaL_error(luaVM, "USAGE: element:SetNumChildrenInC( numChildren, optional:shouldRemoveExcessChildren )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_type(luaVM, 3) == 1 )
  {
    v5 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v5, luaVM);
    if ( GridData->buildChildFunction == -2 )
      j_luaL_error(luaVM, (const char *)&queryFormat, "!LUIElement_Grid_UserSuppliesChildren( gridData )");
    GridData->requestedNumChildren = lui_tointeger32(luaVM, 2);
    if ( j_lua_toboolean(luaVM, 3) )
      LUIElement_Grid_RemoveExcessChildren(v5, GridData, luaVM);
    LUIElement_Grid_SetDimensions(v5, GridData, luaVM, a4);
    LUIElement_Grid_ShuffleLines(GridData, &GridData->xData);
    LUIElement_Grid_ShuffleLines(GridData, &GridData->yData);
    LUI_LUIElement_InvalidateLayout(v5);
  }
  return 0i64;
}

/*
==============
LUIElement_Grid_SetNumColumnsInC_impl
==============
*/
__int64 LUIElement_Grid_SetNumColumnsInC_impl(lua_State *const luaVM, __int64 a2, __int64 a3, double a4)
{
  LUIElement *v5; 
  LUIGridData *GridData; 
  int v7; 
  int v8; 
  __int64 maxVisibleLines; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) && j_lua_type(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetNumColumnsInC( numChildren )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && (j_lua_isnumber(luaVM, 2) || !j_lua_type(luaVM, 2)) )
  {
    v5 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v5, luaVM);
    if ( j_lua_type(luaVM, 2) )
    {
      v8 = lui_tointeger32(luaVM, 2);
      v7 = v8;
      if ( GridData->buildChildFunction == -2 )
      {
        if ( v8 > GridData->xData.managedLines )
          j_luaL_error(luaVM, (const char *)&queryFormat, "numLines <= axisData->managedLines");
      }
      else if ( GridData->forcePrimaryAxisScrolling )
      {
        if ( GridData->primaryAxis )
        {
          maxVisibleLines = (unsigned int)GridData->xData.maxVisibleLines;
          if ( v8 > (int)maxVisibleLines )
            j_luaL_error(luaVM, "Attempting to set number of columns to %d in a grid with max visible columns %d and force 1D scrolling set.", (unsigned int)v8, maxVisibleLines);
        }
      }
    }
    else
    {
      v7 = -1;
    }
    GridData->xData.requestedNumLines = v7;
    LUIElement_Grid_SetDimensions(v5, GridData, luaVM, a4);
    LUIElement_Grid_LineUpElements(GridData, NULL, NULL, luaVM);
    LUIElement_Grid_ShuffleLines(GridData, &GridData->xData);
    LUIElement_Grid_ShuffleLines(GridData, &GridData->yData);
    LUI_LUIElement_InvalidateLayout(v5);
  }
  return 0i64;
}

/*
==============
LUIElement_Grid_SetNumRowsInC_impl
==============
*/
__int64 LUIElement_Grid_SetNumRowsInC_impl(lua_State *const luaVM, __int64 a2, __int64 a3, double a4)
{
  LUIElement *v5; 
  LUIGridData *GridData; 
  int v7; 
  int v8; 
  __int64 maxVisibleLines; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) && j_lua_type(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetNumRowsInC( numChildren )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && (j_lua_isnumber(luaVM, 2) || !j_lua_type(luaVM, 2)) )
  {
    v5 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v5, luaVM);
    if ( j_lua_type(luaVM, 2) )
    {
      v8 = lui_tointeger32(luaVM, 2);
      v7 = v8;
      if ( GridData->buildChildFunction == -2 )
      {
        if ( v8 > GridData->yData.managedLines )
          j_luaL_error(luaVM, (const char *)&queryFormat, "numLines <= axisData->managedLines");
      }
      else if ( GridData->forcePrimaryAxisScrolling && GridData->primaryAxis != VERTICAL )
      {
        maxVisibleLines = (unsigned int)GridData->yData.maxVisibleLines;
        if ( v8 > (int)maxVisibleLines )
          j_luaL_error(luaVM, "Attempting to set number of rows to %d in a grid with max visible rows %d and force 1D scrolling set.", (unsigned int)v8, maxVisibleLines);
      }
    }
    else
    {
      v7 = -1;
    }
    GridData->yData.requestedNumLines = v7;
    LUIElement_Grid_SetDimensions(v5, GridData, luaVM, a4);
    LUIElement_Grid_LineUpElements(GridData, NULL, NULL, luaVM);
    LUIElement_Grid_ShuffleLines(GridData, &GridData->xData);
    LUIElement_Grid_ShuffleLines(GridData, &GridData->yData);
    LUI_LUIElement_InvalidateLayout(v5);
  }
  return 0i64;
}

/*
==============
LUIElement_Grid_SetSpacing
==============
*/
void LUIElement_Grid_SetSpacing(LUIGridAxis axis, lua_State *luaVM)
{
  LUIElement *v5; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: element:SetRowSpacing( spacing ) or element:SetColumnSpacing( spacing )");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:SetRowSpacing( spacing ) or element:SetColumnSpacing( spacing )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetRowSpacing( spacing ) or element:SetColumnSpacing( spacing )");
  v5 = LUI_ToElement(luaVM, 1);
  if ( !v5->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  _RBX = v5->customElementData;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  _RAX = 20i64;
  if ( axis )
    _RAX = 1348i64;
  __asm { vmovss  dword ptr [rax+rbx], xmm0 }
  LUI_LUIElement_InvalidateLayout(v5);
}

/*
==============
LUIElement_Grid_SetTargetLine
==============
*/
__int64 LUIElement_Grid_SetTargetLine(LUIGridAxis axis, lua_State *luaVM)
{
  LUIElement *v6; 
  LUIGridData *GridData; 
  bool clamp; 
  int v10; 

  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_type(luaVM, 3) != 1 || j_lua_type(luaVM, 4) != 1 )
    j_luaL_error(luaVM, "USAGE: element:SetTargetRow( <row_index>, <clamp>, <snap> ) or element:SetTargetColumn( <column_index>, <clamp>, <snap> )");
  if ( j_lua_gettop(luaVM) == 4 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_type(luaVM, 3) == 1 && j_lua_type(luaVM, 4) == 1 )
  {
    __asm { vmovaps [rsp+58h+var_18], xmm6 }
    v6 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v6, luaVM);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vmovaps xmm6, xmm0 }
    clamp = j_lua_toboolean(luaVM, 3) > 0;
    v10 = j_lua_toboolean(luaVM, 4);
    __asm { vmovaps xmm3, xmm6; targetPosition }
    LUIElement_Grid_SetTargetPosition(v6, GridData, axis, *(float *)&_XMM3, clamp, v10 > 0, luaVM);
    LUI_LUIElement_InvalidateLayout(v6);
    __asm { vmovaps xmm6, [rsp+58h+var_18] }
  }
  return 0i64;
}

/*
==============
LUIElement_Grid_SetTargetLineToDefault
==============
*/
__int64 LUIElement_Grid_SetTargetLineToDefault(LUIGridAxis axis, lua_State *luaVM)
{
  LUIElement *v4; 
  LUIGridData *GridData; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:SetTargetRowToDefault() or element:SetTargetColumnToDefault()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v4 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v4, luaVM);
    LUIElement_Grid_SetDefaultTargetPosition(v4, GridData, axis, luaVM);
    LUI_LUIElement_InvalidateLayout(v4);
  }
  return 0i64;
}

/*
==============
LUIElement_Grid_SetTargetPosition
==============
*/

void __fastcall LUIElement_Grid_SetTargetPosition(LUIElement *grid, LUIGridData *gridData, LUIGridAxis axis, double targetPosition, const bool clamp, const bool snap, lua_State *luaVM)
{
  __int64 v12; 
  bool v18; 
  bool v19; 
  int alignment; 
  int v24; 
  bool v25; 
  unsigned int flags; 
  __int64 v27; 
  unsigned int v37; 
  __int64 v39; 
  unsigned int numLines; 
  bool v49; 
  float fmt; 
  float fmta; 
  lua_State *v62; 
  lua_State *v63; 
  double v64; 
  double v65; 
  double v66; 
  LUIElementAxisPosition v67; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  v12 = 16i64;
  _RDI = grid;
  if ( axis )
    v12 = 1344i64;
  _RBX = (LUIGridAxisData *)((char *)gridData + v12);
  __asm { vmovaps xmm6, xmm3 }
  if ( _RBX->numLines >= 0 )
  {
    v18 = 0;
    v19 = !clamp;
    __asm
    {
      vmovaps xmmword ptr [rax-28h], xmm7
      vmovaps xmmword ptr [rax-38h], xmm8
      vmovaps xmmword ptr [rax-48h], xmm9
      vxorps  xmm8, xmm8, xmm8
    }
    if ( clamp )
    {
      if ( axis )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rdi+18h]
          vmovsd  xmm1, qword ptr [rdi+28h]
        }
      }
      else
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rdi]
          vmovsd  xmm1, qword ptr [rdi+10h]
        }
      }
      __asm
      {
        vmovups [rsp+0A8h+var_68], xmm0
        vmovsd  [rsp+0A8h+var_58], xmm1
      }
      *(float *)&_XMM0 = LUI_Measure(&v67);
      alignment = _RBX->alignment;
      if ( _RBX->alignment )
      {
        v18 = alignment == 0;
        v24 = alignment - 1;
        v19 = v24 == 0;
        if ( v24 )
        {
          if ( v24 == 1 )
          {
            flags = _RDI->currentAnimationState.flags;
            v18 = 0;
            v19 = (flags & 2) == 0;
            if ( (flags & 2) == 0 )
              goto LABEL_20;
            v18 = 0;
            v19 = !gridData->pendingDimensionUpdate;
            if ( gridData->pendingDimensionUpdate )
              goto LABEL_20;
            v18 = 0;
            v19 = (flags & 1) == 0;
            if ( (flags & 1) == 0 )
              goto LABEL_20;
            v27 = 28i64;
            if ( axis )
              v27 = 1356i64;
            v18 = 0;
            v19 = *(int *)((char *)&gridData->buildChildFunction + v27) == 0;
            if ( *(int *)((char *)&gridData->buildChildFunction + v27) >= 0 )
            {
              __asm
              {
                vxorps  xmm3, xmm3, xmm3; linePosition
                vmovss  dword ptr [rsp+0A8h+fmt], xmm0
              }
              *(float *)&_XMM0 = LUIElement_Grid_ConvertPixelDistanceToLines(_RDI, gridData, axis, *(double *)&_XMM3, fmt, luaVM);
            }
            else
            {
LABEL_20:
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, dword ptr [rbx+10h]
              }
            }
            __asm
            {
              vmaxss  xmm1, xmm0, xmm6
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, dword ptr [rbx+0Ch]
              vminss  xmm6, xmm1, xmm0
            }
          }
          else
          {
            v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 1206, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected alignment");
            v18 = 0;
            v19 = !v25;
            if ( v25 )
              __debugbreak();
          }
        }
        else
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rbx+0Ch]
            vsubss  xmm2, xmm0, cs:__real@3f000000
            vmaxss  xmm0, xmm6, cs:__real@3f000000
            vminss  xmm6, xmm2, xmm0
          }
        }
      }
      else
      {
        v37 = _RDI->currentAnimationState.flags;
        __asm { vmaxss  xmm6, xmm6, xmm8 }
        if ( (v37 & 2) == 0 || gridData->pendingDimensionUpdate || (v37 & 1) == 0 )
          goto LABEL_30;
        v39 = 28i64;
        if ( axis )
          v39 = 1356i64;
        if ( *(int *)((char *)&gridData->buildChildFunction + v39) >= 0 )
        {
          __asm
          {
            vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000
            vxorps  xmm3, xmm3, xmm3
            vcvtsi2ss xmm3, xmm3, dword ptr [rbx+0Ch]; linePosition
            vmovss  dword ptr [rsp+0A8h+fmt], xmm0
          }
          *(float *)&_XMM0 = LUIElement_Grid_ConvertPixelDistanceToLines(_RDI, gridData, axis, *(double *)&_XMM3, fmta, luaVM);
        }
        else
        {
LABEL_30:
          numLines = _RBX->numLines;
          v18 = numLines < _RBX->maxVisibleLines;
          v19 = numLines == _RBX->maxVisibleLines;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
          }
        }
        __asm { vminss  xmm6, xmm0, xmm6 }
      }
    }
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vcvtsi2ss xmm7, xmm7, dword ptr [rbx+0Ch]
      vcomiss xmm7, xmm8
      vxorpd  xmm9, xmm9, xmm9
    }
    if ( v18 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm7, xmm7
        vmovsd  [rsp+0A8h+var_78], xmm0
        vmovsd  [rsp+0A8h+var_80], xmm9
      }
      v49 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(double *)&v62, v64);
      v18 = 0;
      v19 = !v49;
      if ( v49 )
        __debugbreak();
    }
    __asm
    {
      vmaxss  xmm0, xmm6, xmm8
      vminss  xmm6, xmm0, xmm7
      vmovaps xmm7, [rsp+0A8h+var_28]
      vcomiss xmm6, xmm8
      vmovaps xmm8, [rsp+0A8h+var_38]
    }
    if ( v18 )
      goto LABEL_45;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+0Ch]
      vcomiss xmm6, xmm0
    }
    if ( !v18 && !v19 )
    {
LABEL_45:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbx+0Ch]
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+0A8h+var_70], xmm1
        vcvtss2sd xmm2, xmm6, xmm6
        vmovsd  [rsp+0A8h+var_78], xmm9
        vmovsd  [rsp+0A8h+var_80], xmm2
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 1211, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( targetPosition ) && ( targetPosition ) <= ( axisData->numLines )", "targetPosition not in [0.f, axisData->numLines]\n\t%g not in [%g, %g]", *(double *)&v63, v65, v66) )
        __debugbreak();
    }
    __asm { vmovaps xmm9, [rsp+0A8h+var_48] }
  }
  __asm { vmovss  dword ptr [rbx+18h], xmm6 }
  if ( snap )
  {
    _RBX->velocity = 0.0;
    __asm { vmovss  dword ptr [rbx+1Ch], xmm6 }
    LUIElement_Grid_ShuffleLines(gridData, _RBX);
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_18] }
}

/*
==============
LUIElement_Grid_SetupDisplayList
==============
*/
void LUIElement_Grid_SetupDisplayList(LUIElement *element, LUIGridData *gridData)
{
  ntl::internal::list_node_base *v3; 
  __int64 v4; 
  __int64 v5; 
  _DWORD *v6; 
  int v7; 
  int buildChildFunction; 
  char *v9; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > > *p_m_listHead; 
  int v12; 
  ntl::internal::list_node_base *j; 
  int numChildren; 
  ntl::internal::list_node_base *mp_prev; 
  char *v16; 
  int v17; 
  ntl::internal::list_node_base *v19; 
  ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > > *i; 

  element->firstChild = NULL;
  v3 = NULL;
  element->lastChild = NULL;
  if ( gridData->numChildren )
  {
    v4 = 16i64;
    v5 = 16i64;
    if ( gridData->primaryAxis )
      v5 = 1344i64;
    v6 = (int *)((char *)&gridData->buildChildFunction + v5);
    v7 = 0;
    if ( gridData->secondaryAxis )
      v4 = 1344i64;
    buildChildFunction = gridData->buildChildFunction;
    v9 = (char *)gridData + v4;
    v17 = gridData->buildChildFunction;
    v16 = v9;
    if ( gridData->buildChildFunction != -2 )
      v7 = *((_DWORD *)v9 + 8);
    mp_next = gridData->gridContent.m_listHead.m_sentinel.mp_next;
    p_m_listHead = &gridData->gridContent.m_listHead;
    v19 = mp_next;
    for ( i = &gridData->gridContent.m_listHead; mp_next != (ntl::internal::list_node_base *)p_m_listHead; v19 = mp_next )
    {
      if ( v7 >= *((_DWORD *)v9 + 8) )
      {
        if ( v7 > *((_DWORD *)v9 + 9) )
          return;
        v12 = 0;
        if ( buildChildFunction != -2 )
          v12 = v6[8];
        if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        for ( j = mp_next[4].mp_prev; j != (ntl::internal::list_node_base *)&mp_next[3].mp_next; j = j->mp_next )
        {
          if ( v12 >= v6[8] )
          {
            if ( v12 > v6[9] )
              break;
            numChildren = gridData->numChildren;
            if ( numChildren >= 0 && numChildren <= v12 + v7 * v6[3] )
              break;
            if ( !element->firstChild )
            {
              if ( !j && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                __debugbreak();
              element->firstChild = (LUIElement *)j[1].mp_prev;
            }
            if ( !j && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            element->lastChild = (LUIElement *)j[1].mp_prev;
            j[1].mp_prev[6].mp_next = NULL;
            mp_prev = j[1].mp_prev;
            if ( v3 )
            {
              mp_prev[6].mp_prev = v3;
              v3[6].mp_next = j[1].mp_prev;
            }
            else
            {
              mp_prev[6].mp_prev = NULL;
            }
            v3 = j[1].mp_prev;
          }
          ++v12;
          if ( !j && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 116, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
        }
        mp_next = v19;
        p_m_listHead = i;
      }
      ++v7;
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 116, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      mp_next = mp_next->mp_next;
      v9 = v16;
      buildChildFunction = v17;
    }
  }
}

/*
==============
LUIElement_Grid_ShuffleLines
==============
*/
void LUIElement_Grid_ShuffleLines(LUIGridData *gridData, LUIGridAxisData *axisData)
{
  LUIGridAxisData *v2; 
  int firstVisibleLine; 
  signed int v6; 
  signed int v7; 
  int v8; 
  signed int i; 
  int outFirstElementIndex; 
  int outLastElementIndex; 

  v2 = axisData;
  if ( gridData->numChildren )
  {
    __asm { vmovss  xmm2, dword ptr [rdx+1Ch]; referenceLinePosition }
    LUIElement_Grid_ComputeAxisBoundaries(gridData, axisData, *(double *)&_XMM2, &outFirstElementIndex, &outLastElementIndex);
    if ( gridData->buildChildFunction == -2 )
    {
      v2->firstVisibleLine = outFirstElementIndex;
      v2->lastVisibleLine = outLastElementIndex;
    }
    else
    {
      firstVisibleLine = v2->firstVisibleLine;
      v6 = 0;
      v7 = 0;
      v8 = outFirstElementIndex;
      for ( i = abs32(firstVisibleLine - outFirstElementIndex); firstVisibleLine < v8; ++v7 )
      {
        if ( v7 >= i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 670, ASSERT_TYPE_ASSERT, "(numIterations < maxIterations)", (const char *)&queryFormat, "numIterations < maxIterations") )
          __debugbreak();
        LUIElement_Grid_MoveLineFromStartToEnd(gridData, v2);
        firstVisibleLine = v2->firstVisibleLine;
      }
      for ( ; firstVisibleLine > v8; ++v6 )
      {
        if ( v6 >= i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 684, ASSERT_TYPE_ASSERT, "(numIterations < maxIterations)", (const char *)&queryFormat, "numIterations < maxIterations") )
          __debugbreak();
        LUIElement_Grid_MoveLineFromEndToStart(gridData, v2);
        firstVisibleLine = v2->firstVisibleLine;
      }
      if ( firstVisibleLine != v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 693, ASSERT_TYPE_ASSERT, "(axisData->firstVisibleLine == start)", (const char *)&queryFormat, "axisData->firstVisibleLine == start") )
        __debugbreak();
      v2->lastVisibleLine = outLastElementIndex;
    }
  }
}

/*
==============
LUIElement_Grid_UpdateChildrenTransitions
==============
*/
void LUIElement_Grid_UpdateChildrenTransitions(LocalClientNum_t localClientNum, LUIElement *element, LUIGridData *gridData, lua_State *luaVM)
{
  double v6; 
  LUIElement *firstChild; 
  __int64 v12; 
  __int64 v13; 
  LUIGridAxisData *v15; 
  int firstVisibleLine; 
  LUIGridAxisData *v18; 
  int v19; 
  bool v24; 
  char v28; 
  char v29; 
  __int64 v32; 
  __int64 v33; 
  int lastVisibleLine; 
  int v42; 
  LUIGridAxisData *v43; 
  int v48; 

  firstChild = element->firstChild;
  v12 = 16i64;
  v13 = 16i64;
  if ( gridData->primaryAxis )
    v12 = 1344i64;
  v15 = (LUIGridAxisData *)((char *)gridData + v12);
  if ( gridData->secondaryAxis )
    v13 = 1344i64;
  firstVisibleLine = v15->firstVisibleLine;
  v18 = (LUIGridAxisData *)((char *)gridData + v13);
  v43 = v18;
  v19 = v18->firstVisibleLine;
  if ( firstChild )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_48], xmm6
      vmovaps [rsp+0A8h+var_58], xmm7
      vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+0A8h+var_68], xmm8
      vmovss  xmm8, cs:__real@3c23d70a
    }
    while ( 1 )
    {
      v42 = v19;
      v48 = firstVisibleLine;
      if ( !LUI_ElementHasWeakTableEntry(firstChild, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 2792, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( child, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( child, luaVM )") )
        __debugbreak();
      *(double *)&_XMM0 = LUIElement_Grid_ComputeTransitionStep(v15, firstVisibleLine, v6);
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = LUIElement_Grid_ComputeTransitionStep(v18, v19, v6);
      __asm { vminss  xmm6, xmm0, xmm6 }
      v24 = 1;
      if ( !LUI_ElementHasWeakTableEntry(firstChild, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 2431, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( child, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( child, luaVM )") )
        __debugbreak();
      LUI_PutElementOnTopOfStack(firstChild, luaVM);
      j_lua_getfield(luaVM, -1, "_gridTransitionStep");
      if ( j_lua_isnumber(luaVM, -1) )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vroundss xmm1, xmm1, xmm6, 1
          vucomiss xmm6, xmm1
        }
        *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
        __asm
        {
          vsubss  xmm1, xmm0, xmm6
          vandps  xmm1, xmm1, xmm7
          vcomiss xmm1, xmm8
        }
        v24 = !(v28 | v29);
      }
      j_lua_settop(luaVM, -3);
      if ( v24 )
      {
        __asm { vcvtss2sd xmm6, xmm6, xmm6 }
        if ( LUI_BeginEventWithElement(localClientNum, firstChild, "grid_anim", luaVM) )
        {
          __asm { vmovaps xmm1, xmm6; value }
          LUI_SetTableNumber((const char *)&stru_143CE7590, *(long double *)&_XMM1, luaVM);
          LUI_EndEventWithElement(luaVM);
        }
        LUI_PutElementOnTopOfStack(firstChild, luaVM);
        __asm { vmovaps xmm1, xmm6; n }
        j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
        j_lua_setfield(luaVM, -2, "_gridTransitionStep");
        j_lua_settop(luaVM, -2);
      }
      if ( gridData->pendingNotify )
      {
        v32 = 16i64;
        if ( gridData->primaryAxis )
          v32 = 1344i64;
        if ( *(int *)((char *)&gridData->buildChildFunction + v32) == firstVisibleLine )
        {
          v33 = 16i64;
          if ( gridData->secondaryAxis )
            v33 = 1344i64;
          if ( *(int *)((char *)&gridData->buildChildFunction + v33) == v19 )
          {
            gridData->pendingNotify = 0;
            if ( LUI_BeginEventWithElement(localClientNum, element, "position_visible", luaVM) )
            {
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, eax
                vcvtss2sd xmm1, xmm0, xmm0; value
              }
              LUI_SetTableNumber("row", *(long double *)&_XMM1, luaVM);
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, eax
                vcvtss2sd xmm1, xmm0, xmm0; value
              }
              LUI_SetTableNumber("column", *(long double *)&_XMM1, luaVM);
              LUI_SetTableElement("child", firstChild, luaVM);
              LUI_EndEventWithElement(luaVM);
            }
          }
        }
      }
      firstChild = firstChild->nextSibling;
      if ( !firstChild )
        break;
      lastVisibleLine = v15->lastVisibleLine;
      if ( firstVisibleLine == lastVisibleLine )
      {
        firstVisibleLine = v15->firstVisibleLine;
        ++v19;
        v18 = v43;
        if ( v48 != lastVisibleLine )
          v19 = v42;
      }
      else
      {
        v18 = v43;
        ++firstVisibleLine;
        ++v19;
        if ( v48 != lastVisibleLine )
          v19 = v42;
      }
    }
    __asm
    {
      vmovaps xmm7, [rsp+0A8h+var_58]
      vmovaps xmm6, [rsp+0A8h+var_48]
      vmovaps xmm8, [rsp+0A8h+var_68]
    }
  }
}

/*
==============
LUIElement_SetGridChildDynamicSize
==============
*/
void LUIElement_SetGridChildDynamicSize(lua_State *luaVM)
{
  LUIElement *v2; 
  int v3; 
  char v4; 
  int v5; 

  if ( j_lua_gettop(luaVM) != 3 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 3");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isboolean( luaVM, 2 )");
  if ( !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 3 )");
  v2 = LUI_ToElement(luaVM, 1);
  v3 = j_lua_toboolean(luaVM, 2);
  v4 = j_lua_tointeger(luaVM, 3);
  v5 = 0x4000;
  if ( !v4 )
    v5 = 0x2000;
  if ( v3 )
    v2->usageFlags |= v5;
  else
    v2->usageFlags &= ~v5;
}

/*
==============
LUI_LuaCall_LUIElement_SetupUIGrid
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupUIGrid(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupUIGrid_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupUIGrid_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupUIGrid_impl(lua_State *const luaVM, __int64 a2, __int64 a3, double a4)
{
  LUIElement *v10; 
  int buildChildFunction; 
  int v13; 
  int v14; 
  bool v15; 
  LUIGridAxis v21; 
  LUIGridAxis primaryAxis; 
  int v25; 
  int v26; 
  int v27; 
  bool v28; 
  char v29; 
  char v30; 
  int maxVisibleLines; 
  int *p_managedLines; 
  int requestedNumLines; 
  int v34; 
  int v35; 
  int v36; 
  int *v37; 
  int v38; 
  int v39; 
  int v40; 
  bool v41; 
  __int64 v50; 
  int *v51; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  char *v57; 
  __int64 v58; 
  unsigned __int64 m_size; 
  unsigned __int64 m_buffer; 
  ntl::internal::pool_allocator_freelist<72> **v62; 
  ntl::internal::pool_allocator_freelist<72> *p_m_freelist; 
  bool v64; 
  int v65; 
  int *v66; 
  ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > **v67; 
  ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > > *p_m_listHead; 
  char *v70; 
  __int64 v71; 
  ntl::internal::list_node<LUIElement *> **v72; 
  unsigned __int64 v74; 
  ntl::internal::list_node<LUIElement *> *v75; 
  ntl::internal::pool_allocator_freelist<24> *v76; 
  ntl::internal::pool_allocator_freelist<24> *v77; 
  int *v78; 
  int i; 
  int v80; 
  LUIElement *v81; 
  ntl::internal::list_node<LUIElement *> *v82; 
  __int64 result; 
  __int64 v88; 
  char *v89; 
  int *v90; 
  __int64 v91; 
  __int128 v92; 
  __int128 v93; 
  char v94; 
  void *retaddr; 
  int v96; 
  int v97; 
  int *v98; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v10 = LUI_ToElement(luaVM, 1);
  v10->layoutFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, float, int, lua_State *))LUIElement_Grid_Layout;
  LUI_LUIElement_RegisterMethods(v10, luaVM, s_gridMethods);
  if ( !LUI_ElementHasWeakTableEntry(v10, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v10, luaVM);
  _RSI = (LUIGridData *)j_lua_newuserdata(luaVM, 0xAF8ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v10->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v10->customElementData = _RSI;
  memset_0(_RSI, 0, sizeof(LUIGridData));
  LUICache<int,float,20,ntl::hash<int>>::LUICache<int,float,20,ntl::hash<int>>(&_RSI->xData.sizesCache);
  LUICache<int,float,20,ntl::hash<int>>::LUICache<int,float,20,ntl::hash<int>>(&_RSI->yData.sizesCache);
  j_lua_pushlstring(luaVM, "_gridFunctionRefs", 0x11ui64);
  j_lua_createtable(luaVM, 0, 2);
  j_lua_settable(luaVM, 1);
  j_lua_getfield(luaVM, 1, "_gridFunctionRefs");
  j_lua_getfield(luaVM, 2, "buildChild");
  if ( j_lua_type(luaVM, -1) == 6 )
  {
    _RSI->buildChildFunction = j_luaL_ref(luaVM, -2);
  }
  else
  {
    _RSI->buildChildFunction = -2;
    j_lua_settop(luaVM, -2);
  }
  j_lua_settop(luaVM, -2);
  buildChildFunction = _RSI->buildChildFunction;
  v97 = _RSI->buildChildFunction;
  j_lua_getfield(luaVM, 1, "_gridFunctionRefs");
  j_lua_getfield(luaVM, 2, "refreshChild");
  if ( j_lua_type(luaVM, -1) == 6 )
  {
    _RSI->refreshChildFunction = j_luaL_ref(luaVM, -2);
  }
  else
  {
    _RSI->refreshChildFunction = -2;
    j_lua_settop(luaVM, -2);
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 1, "_gridFunctionRefs");
  j_lua_getfield(luaVM, 2, "measureRow");
  if ( j_lua_type(luaVM, -1) == 6 )
    _RSI->yData.measureLineFunction = j_luaL_ref(luaVM, -2);
  else
    j_lua_settop(luaVM, -2);
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 1, "_gridFunctionRefs");
  j_lua_getfield(luaVM, 2, "measureColumn");
  if ( j_lua_type(luaVM, -1) == 6 )
    _RSI->xData.measureLineFunction = j_luaL_ref(luaVM, -2);
  else
    j_lua_settop(luaVM, -2);
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "maxVisibleRows");
  if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 3196, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
    __debugbreak();
  v13 = lui_tointeger32(luaVM, -1);
  if ( v13 < 0 )
    v13 = 0;
  _RSI->yData.maxVisibleLines = v13;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "maxVisibleColumns");
  if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 3201, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
    __debugbreak();
  v14 = lui_tointeger32(luaVM, -1);
  if ( v14 < 0 )
    v14 = 0;
  _RSI->xData.maxVisibleLines = v14;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "adjustSizeToContent");
  if ( j_lua_type(luaVM, -1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 3206, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (-1)) == 1))", (const char *)&queryFormat, "lua_isboolean( luaVM, -1 )") )
    __debugbreak();
  _RSI->adjustSizeToContent = j_lua_toboolean(luaVM, -1) != 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "forcePrimaryAxisScrolling");
  v15 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) != 0;
  _RSI->forcePrimaryAxisScrolling = v15;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "spacingX");
  if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 3222, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
    __debugbreak();
  *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmaxss  xmm0, xmm0, xmm6
    vmovss  dword ptr [rsi+14h], xmm0
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "spacingY");
  if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 3227, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
    __debugbreak();
  *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
  __asm
  {
    vmaxss  xmm0, xmm0, xmm6
    vmovss  dword ptr [rsi+544h], xmm0
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "maxVelocity");
  if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 3232, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
    __debugbreak();
  *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
  __asm
  {
    vmaxss  xmm0, xmm0, xmm6
    vmovss  dword ptr [rsi+0Ch], xmm0
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "springCoefficient");
  if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 3237, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
    __debugbreak();
  *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
  __asm
  {
    vmaxss  xmm0, xmm0, xmm6
    vmovss  dword ptr [rsi+8], xmm0
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "primaryAxis");
  if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 3242, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
    __debugbreak();
  v21 = (unsigned __int8)lui_tointeger32(luaVM, -1);
  _RSI->primaryAxis = v21;
  if ( (unsigned __int8)v21 > VERTICAL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 3244, ASSERT_TYPE_ASSERT, "(gridData->primaryAxis == LUIGridAxis::HORIZONTAL || gridData->primaryAxis == LUIGridAxis::VERTICAL)", (const char *)&queryFormat, "gridData->primaryAxis == LUIGridAxis::HORIZONTAL || gridData->primaryAxis == LUIGridAxis::VERTICAL") )
    __debugbreak();
  j_lua_settop(luaVM, -2);
  primaryAxis = _RSI->primaryAxis;
  _RSI->secondaryAxis = primaryAxis == HORIZONTAL;
  j_lua_getfield(luaVM, 2, "columnWidth");
  __asm { vmovss  xmm7, cs:__real@bf800000 }
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm1, xmm0, xmm6 }
  }
  else
  {
    __asm { vmovaps xmm1, xmm7 }
  }
  __asm { vmovss  dword ptr [rsi+3Ch], xmm1 }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "rowHeight");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm7, xmm0, xmm6 }
  }
  __asm { vmovss  dword ptr [rsi+56Ch], xmm7 }
  j_lua_settop(luaVM, -2);
  if ( buildChildFunction == -2 )
  {
    _RSI->requestedNumChildren = 0;
  }
  else
  {
    j_lua_getfield(luaVM, 2, "numChildren");
    if ( j_lua_isnumber(luaVM, -1) )
    {
      v25 = lui_tointeger32(luaVM, -1);
      if ( v25 < 0 )
        v25 = 0;
    }
    else
    {
      v25 = -1;
    }
    _RSI->requestedNumChildren = v25;
    j_lua_settop(luaVM, -2);
  }
  j_lua_getfield(luaVM, 2, "numRows");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v26 = lui_tointeger32(luaVM, -1);
    if ( v26 < 0 )
      v26 = 0;
  }
  else
  {
    v26 = -1;
  }
  _RSI->yData.requestedNumLines = v26;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "numColumns");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v27 = lui_tointeger32(luaVM, -1);
    if ( v27 < 0 )
      v27 = 0;
  }
  else
  {
    v27 = -1;
  }
  _RSI->xData.requestedNumLines = v27;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "ensureClampedTargetLineOnDimensionsUpdate");
  v28 = j_lua_type(luaVM, -1) != 1 || j_lua_toboolean(luaVM, -1) != 0;
  _RSI->ensureClampedTargetLineOnDimensionsUpdate = v28;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "horizontalAlignment");
  if ( j_lua_isnumber(luaVM, -1) && (v29 = lui_tointeger32(luaVM, -1)) != 0 )
  {
    if ( v29 == 1 )
    {
      _RSI->xData.alignment = CENTER;
    }
    else if ( v29 == 2 )
    {
      _RSI->xData.alignment = BOTTOM;
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 3339, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected horizontal alignment value") )
    {
      __debugbreak();
    }
  }
  else
  {
    _RSI->xData.alignment = TOP;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "verticalAlignment");
  if ( j_lua_isnumber(luaVM, -1) && (v30 = lui_tointeger32(luaVM, -1)) != 0 )
  {
    if ( v30 == 1 )
    {
      _RSI->yData.alignment = CENTER;
    }
    else if ( v30 == 2 )
    {
      _RSI->yData.alignment = BOTTOM;
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 3363, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected vertical alignment value") )
    {
      __debugbreak();
    }
  }
  else
  {
    _RSI->yData.alignment = TOP;
  }
  j_lua_settop(luaVM, -2);
  maxVisibleLines = _RSI->xData.maxVisibleLines;
  p_managedLines = &_RSI->xData.managedLines;
  if ( buildChildFunction == -2 )
  {
    requestedNumLines = _RSI->xData.requestedNumLines;
    if ( maxVisibleLines > requestedNumLines )
      requestedNumLines = _RSI->xData.maxVisibleLines;
    *p_managedLines = requestedNumLines;
    j_lua_getfield(luaVM, 2, "maxColumns");
    if ( j_lua_isnumber(luaVM, -1) )
    {
      v34 = *p_managedLines;
      v35 = lui_tointeger32(luaVM, -1);
      if ( v35 > v34 )
        v34 = v35;
      *p_managedLines = v34;
    }
    j_lua_settop(luaVM, -2);
    v36 = _RSI->yData.requestedNumLines;
    v37 = &_RSI->yData.managedLines;
    if ( _RSI->yData.maxVisibleLines > v36 )
      v36 = _RSI->yData.maxVisibleLines;
    *v37 = v36;
    j_lua_getfield(luaVM, 2, "maxRows");
    if ( j_lua_isnumber(luaVM, -1) )
    {
      v38 = *v37;
      v39 = lui_tointeger32(luaVM, -1);
      if ( v39 > v38 )
        v38 = v39;
      *v37 = v38;
    }
    j_lua_settop(luaVM, -2);
  }
  else
  {
    v37 = &_RSI->yData.managedLines;
    v40 = _RSI->yData.maxVisibleLines;
    if ( _RSI->forcePrimaryAxisScrolling )
    {
      v41 = _RSI->primaryAxis == HORIZONTAL;
      *p_managedLines = maxVisibleLines;
      *v37 = v40;
      if ( v41 )
      {
        *p_managedLines = maxVisibleLines + 1;
        goto LABEL_122;
      }
    }
    else
    {
      *p_managedLines = maxVisibleLines + 1;
    }
    *v37 = v40 + 1;
  }
LABEL_122:
  LUIElement_Grid_SetDimensions(v10, _RSI, luaVM, a4);
  __asm { vmovss  xmm8, cs:__real@3f000000 }
  if ( _RSI->xData.alignment )
  {
    if ( _RSI->xData.alignment == CENTER )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rsi+20h]
        vmulss  xmm7, xmm0, xmm8
      }
    }
    else
    {
      __asm { vxorps  xmm7, xmm7, xmm7 }
      if ( _RSI->xData.alignment == BOTTOM )
      {
        __asm { vcvtsi2ss xmm7, xmm7, dword ptr [rsi+20h] }
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 1241, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected alignment") )
      {
        __debugbreak();
      }
    }
  }
  else
  {
    __asm { vxorps  xmm7, xmm7, xmm7 }
  }
  __asm { vmovaps xmm3, xmm7; targetPosition }
  LUIElement_Grid_SetTargetPosition(v10, _RSI, HORIZONTAL, *(double *)&_XMM3, 1, 1, luaVM);
  if ( _RSI->yData.alignment )
  {
    if ( _RSI->yData.alignment == CENTER )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rsi+550h]
        vmulss  xmm6, xmm0, xmm8
      }
    }
    else if ( _RSI->yData.alignment == BOTTOM )
    {
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, dword ptr [rsi+550h]
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 1241, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected alignment") )
    {
      __debugbreak();
    }
  }
  __asm { vmovaps xmm3, xmm6; targetPosition }
  LUIElement_Grid_SetTargetPosition(v10, _RSI, VERTICAL, *(double *)&_XMM3, 1, 1, luaVM);
  v50 = 36i64;
  if ( primaryAxis )
    v50 = 1364i64;
  v51 = (int *)((char *)&_RSI->buildChildFunction + v50);
  v98 = v51;
  v52 = *v51;
  v91 = 24 * v52;
  if ( primaryAxis == HORIZONTAL )
    p_managedLines = v37;
  v90 = p_managedLines;
  v53 = *p_managedLines;
  v54 = 24 * v52 * v53;
  v55 = 72 * v53;
  v88 = 72 * v53;
  v56 = 24 * v52 * v53;
  LUI_PutElementOnTopOfStack(v10, luaVM);
  v89 = (char *)j_lua_newuserdata(luaVM, v55 + v56 + v54);
  j_lua_setfield(luaVM, -2, "_gridContentBuffer");
  j_lua_settop(luaVM, -2);
  _RSI->scratch.m_data.m_buffer = NULL;
  _RSI->scratch.m_data.m_size = 0i64;
  _RSI->scratch.m_data.m_buffer = NULL;
  _RSI->scratch.m_data.m_size = 0i64;
  _RSI->scratch.m_listHead.m_sentinel.mp_prev = &_RSI->scratch.m_listHead.m_sentinel;
  _RSI->scratch.m_listHead.m_sentinel.mp_next = &_RSI->scratch.m_listHead.m_sentinel;
  v57 = &v89[v54 + v88];
  if ( !v57 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 71, ASSERT_TYPE_ASSERT, "( p_buffer_start )", (const char *)&queryFormat, "p_buffer_start") )
    __debugbreak();
  _RSI->scratch.m_data.m_buffer = v57;
  _RSI->scratch.m_data.m_size = v56;
  ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>::reserve(&_RSI->scratch, *v51 * *v90);
  _RSI->gridContent.m_data.m_buffer = NULL;
  _RSI->gridContent.m_data.m_size = 0i64;
  _RSI->gridContent.m_data.m_buffer = NULL;
  _RSI->gridContent.m_data.m_size = 0i64;
  _RSI->gridContent.m_listHead.m_sentinel.mp_prev = &_RSI->gridContent.m_listHead.m_sentinel;
  _RSI->gridContent.m_listHead.m_sentinel.mp_next = &_RSI->gridContent.m_listHead.m_sentinel;
  if ( !v89 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 71, ASSERT_TYPE_ASSERT, "( p_buffer_start )", (const char *)&queryFormat, "p_buffer_start") )
    __debugbreak();
  _RSI->gridContent.m_data.m_size = v88;
  _RSI->gridContent.m_data.m_buffer = v89;
  v58 = *v90;
  if ( _RSI->gridContent.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 458, ASSERT_TYPE_ASSERT, "( base_type::m_data.begin() == 0 )", (const char *)&queryFormat, "base_type::m_data.begin() == NULL") )
    __debugbreak();
  if ( 72 * v58 > _RSI->gridContent.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 56, ASSERT_TYPE_ASSERT, "( size_bytes <= m_data.size_in_bytes() )", (const char *)&queryFormat, "size_bytes <= m_data.size_in_bytes()") )
    __debugbreak();
  *(_QWORD *)&v92 = _RSI->gridContent.m_data.m_buffer;
  *((_QWORD *)&v92 + 1) = v58;
  __asm
  {
    vmovups xmm0, [rsp+0D8h+var_78]
    vmovups xmmword ptr [rsi+0A88h], xmm0
  }
  m_size = _RSI->gridContent.m_data.m_size;
  m_buffer = (unsigned __int64)_RSI->gridContent.m_data.m_buffer;
  if ( !m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 52, ASSERT_TYPE_ASSERT, "( num_elements > 0 )", (const char *)&queryFormat, "num_elements > 0") )
    __debugbreak();
  v62 = (ntl::internal::pool_allocator_freelist<72> **)(m_buffer + 72 * m_size);
  p_m_freelist = &_RSI->gridContent.m_freelist;
  do
  {
    v62 -= 9;
    *v62 = p_m_freelist;
    p_m_freelist = (ntl::internal::pool_allocator_freelist<72> *)v62;
  }
  while ( (unsigned __int64)v62 > m_buffer );
  _RSI->gridContent.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v62;
  if ( !v62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  v64 = _RSI->yData.maxVisibleLines <= 0;
  _RSI->maxNumChildren = -1;
  if ( !v64 && _RSI->xData.maxVisibleLines > 0 )
  {
    v65 = 0;
    _RSI->maxNumChildren = 0;
    v96 = 0;
    if ( *v90 > 0 )
    {
      v66 = v51;
      v67 = (ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > **)&_RSI->gridContent.m_freelist;
      p_m_listHead = &_RSI->gridContent.m_listHead;
      do
      {
        if ( !*v67 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
          if ( !*v67 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
        }
        if ( *v67 == (ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > *)v67 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x48ui64, _RSI->gridContent.m_data.m_size) )
          __debugbreak();
        _R12 = *v67;
        *v67 = (ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > *)(*v67)->mp_prev;
        _R12->mp_prev = NULL;
        _R12->mp_next = NULL;
        _R12->m_data.m_data.m_buffer = NULL;
        _R12->m_data.m_data.m_size = 0i64;
        _R12->m_data.m_data.m_buffer = NULL;
        _R12->m_data.m_data.m_size = 0i64;
        _R12->m_data.m_listHead.m_sentinel.mp_prev = &_R12->m_data.m_listHead.m_sentinel;
        _R12->m_data.m_listHead.m_sentinel.mp_next = &_R12->m_data.m_listHead.m_sentinel;
        ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>>>>::insert_before(p_m_listHead, (ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > *)p_m_listHead, _R12);
        _R12->m_data.m_data.m_buffer = NULL;
        _R12->m_data.m_data.m_size = 0i64;
        _R12->m_data.m_data.m_buffer = NULL;
        _R12->m_data.m_data.m_size = 0i64;
        _R12->m_data.m_listHead.m_sentinel.mp_prev = &_R12->m_data.m_listHead.m_sentinel;
        _R12->m_data.m_listHead.m_sentinel.mp_next = &_R12->m_data.m_listHead.m_sentinel;
        v70 = &v89[v91 * v65 + v88];
        if ( !v70 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 71, ASSERT_TYPE_ASSERT, "( p_buffer_start )", (const char *)&queryFormat, "p_buffer_start") )
          __debugbreak();
        _R12->m_data.m_data.m_buffer = v70;
        _R12->m_data.m_data.m_size = v91;
        v71 = *v66;
        if ( _R12->m_data.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 458, ASSERT_TYPE_ASSERT, "( base_type::m_data.begin() == 0 )", (const char *)&queryFormat, "base_type::m_data.begin() == NULL") )
          __debugbreak();
        if ( 24 * v71 > _R12->m_data.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 56, ASSERT_TYPE_ASSERT, "( size_bytes <= m_data.size_in_bytes() )", (const char *)&queryFormat, "size_bytes <= m_data.size_in_bytes()") )
          __debugbreak();
        v72 = (ntl::internal::list_node<LUIElement *> **)&_R12->m_data.m_freelist;
        *((_QWORD *)&v93 + 1) = v71;
        *(_QWORD *)&v93 = _R12->m_data.m_data.m_buffer;
        __asm
        {
          vmovups xmm0, [rsp+0D8h+var_78]
          vmovups xmmword ptr [r12+10h], xmm0
        }
        v74 = _R12->m_data.m_data.m_size;
        v75 = _R12->m_data.m_data.m_buffer;
        if ( !v74 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 52, ASSERT_TYPE_ASSERT, "( num_elements > 0 )", (const char *)&queryFormat, "num_elements > 0") )
          __debugbreak();
        v76 = &_R12->m_data.m_freelist;
        v77 = (ntl::internal::pool_allocator_freelist<24> *)&v75[v74];
        do
        {
          v77 -= 3;
          v77->m_head.mp_next = &v76->m_head;
          v76 = v77;
        }
        while ( v77 > (ntl::internal::pool_allocator_freelist<24> *)v75 );
        *v72 = (ntl::internal::list_node<LUIElement *> *)v77;
        if ( !v77 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( v97 != -2 )
        {
          v78 = v98;
          for ( i = 0; i < *v98; ++_RSI->maxNumChildren )
          {
            if ( _RSI->buildChildFunction == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 431, ASSERT_TYPE_ASSERT, "(!LUIElement_Grid_UserSuppliesChildren( gridData ))", (const char *)&queryFormat, "!LUIElement_Grid_UserSuppliesChildren( gridData )") )
              __debugbreak();
            if ( !LUI_ElementHasWeakTableEntry(v10, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 432, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( grid, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( grid, luaVM )") )
              __debugbreak();
            LUI_PutElementOnTopOfStack(v10, luaVM);
            j_lua_getfield(luaVM, -1, "_gridFunctionRefs");
            j_lua_rawgeti(luaVM, -1, _RSI->buildChildFunction);
            j_lua_remove(luaVM, -2);
            j_lua_remove(luaVM, -2);
            v80 = LuaShared_PCall(luaVM, 0, 1);
            if ( v80 )
            {
              LUI_ReportError("Error while creating UI grid content.\n", luaVM);
              LUI_HandleLuaError(v80);
              v81 = NULL;
            }
            else
            {
              if ( !j_lua_isuserdata(luaVM, -1) )
                j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, -1 )");
              v81 = LUI_ToElement(luaVM, -1);
              j_lua_settop(luaVM, -2);
              v81->priority = 0;
              v81->parent = v10;
              LUI_LUIElement_AddStrongReference(v10, v81, luaVM);
            }
            if ( !*v72 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
                __debugbreak();
              if ( !*v72 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
                __debugbreak();
            }
            if ( *v72 == (ntl::internal::list_node<LUIElement *> *)v72 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, _R12->m_data.m_data.m_size) )
              __debugbreak();
            v82 = *v72;
            *v72 = (ntl::internal::list_node<LUIElement *> *)(*v72)->mp_prev;
            v82->mp_prev = NULL;
            v82->mp_next = NULL;
            v82->m_data = v81;
            ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *>>::insert_before(&_R12->m_data.m_listHead, (ntl::internal::list_node<LUIElement *> *)&_R12->m_data.m_listHead, v82);
            v78 = v98;
            ++i;
          }
          v66 = v78;
        }
        v67 = (ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > **)&_RSI->gridContent.m_freelist;
        p_m_listHead = &_RSI->gridContent.m_listHead;
        v65 = v96 + 1;
        v96 = v65;
      }
      while ( v65 < *v90 );
    }
  }
  LUIElement_Grid_ShuffleLines(_RSI, &_RSI->xData);
  LUIElement_Grid_ShuffleLines(_RSI, &_RSI->yData);
  LUIElement_Grid_PopulateChildren(v10, _RSI, luaVM);
  _R11 = &v94;
  result = 0i64;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

