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
__int64 LUIElement_Grid_SetMaxVelocity(lua_State *const luaVM)
{
  LUIElement *v3; 
  LUIGridData *GridData; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetMaxVelocity( maxVelocity )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v3, luaVM);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm0, xmm0, xmm1 }
    GridData->maxVelocity = *(float *)&_XMM0;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUIElement_Grid_SetSpringCoefficient
==============
*/
__int64 LUIElement_Grid_SetSpringCoefficient(lua_State *const luaVM)
{
  LUIElement *v3; 
  LUIGridData *GridData; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetSpringCoefficient( springCoefficient )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v3, luaVM);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm0, xmm0, xmm1 }
    GridData->springCoefficient = *(float *)&_XMM0;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
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
  LUIElement *v4; 
  float v7; 
  LUIElement *parent; 
  __int64 v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 

  v4 = element;
  v7 = LUIElement_Grid_MeasureRequestedVisibleContent(element, gridData, axis, luaVM);
  if ( !v4->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 2903, ASSERT_TYPE_ASSERT, "(element->parent)", (const char *)&queryFormat, "element->parent") )
    __debugbreak();
  parent = v4->parent;
  if ( axis )
    parent = (LUIElement *)((char *)parent + 24);
  if ( axis )
    v4 = (LUIElement *)((char *)v4 + 24);
  v9 = 1340i64;
  if ( axis )
    v9 = 2668i64;
  if ( *((_BYTE *)&gridData->buildChildFunction + v9) )
  {
    if ( *((_BYTE *)&gridData->buildChildFunction + v9) == 1 )
    {
      v11 = (float)(v4->currentAnimationState.position.x.global[1] + v4->currentAnimationState.position.x.global[0]) * 0.5;
      v12 = parent->currentAnimationState.position.x.global[1];
      v13 = parent->currentAnimationState.position.x.global[0];
      v14 = v13 * v4->currentAnimationState.position.x.anchors[1];
      v4->currentAnimationState.position.x.offsets[0] = (float)(v11 - (float)(v7 * 0.5)) - (float)((float)((float)(1.0 - v4->currentAnimationState.position.x.anchors[0]) * v13) + (float)(v12 * v4->currentAnimationState.position.x.anchors[0]));
      v4->currentAnimationState.position.x.offsets[1] = (float)((float)(v7 * 0.5) + v11) - (float)((float)((float)(1.0 - v4->currentAnimationState.position.x.anchors[1]) * v12) + v14);
    }
    else if ( *((_BYTE *)&gridData->buildChildFunction + v9) == 2 )
    {
      v10 = 1.0 - v4->currentAnimationState.position.x.anchors[1];
      v4->currentAnimationState.position.x.offsets[0] = v4->currentAnimationState.position.x.offsets[1] - v7;
      v4->currentAnimationState.position.x.anchors[0] = v10;
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 2942, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected alignment") )
    {
      __debugbreak();
    }
  }
  else
  {
    v15 = v7 + v4->currentAnimationState.position.x.offsets[0];
    v4->currentAnimationState.position.x.anchors[1] = 1.0 - v4->currentAnimationState.position.x.anchors[0];
    v4->currentAnimationState.position.x.offsets[1] = v15;
  }
}

/*
==============
LUIElement_Grid_ApplyPhysics
==============
*/
void LUIElement_Grid_ApplyPhysics(LUIElement *element, LUIGridData *gridData, LUIGridAxis axis, float unitScale, int deltaTime, lua_State *luaVM)
{
  __int128 v6; 
  __int64 v8; 
  __int64 v10; 
  float v14; 
  float v15; 
  __int64 v16; 
  float v17; 
  float v18; 
  float v19; 
  double v20; 
  float v21; 
  bool v22; 
  float v23; 
  float v24; 
  __int64 v25; 
  int v26; 
  double v27; 

  v6 = 0i64;
  *(float *)&v6 = (float)deltaTime * 0.001;
  _XMM1 = v6;
  v8 = 40i64;
  if ( axis )
    v8 = 1368i64;
  __asm { vminss  xmm11, xmm1, cs:__real@42480000 }
  v10 = 44i64;
  if ( axis )
    v10 = 1372i64;
  v14 = LUIElement_Grid_ConvertLineDistanceToPixels(element, gridData, axis, *(float *)((char *)&gridData->buildChildFunction + v10), *(float *)((char *)&gridData->buildChildFunction + v8), luaVM);
  LODWORD(v15) = LODWORD(v14) & _xmm;
  v16 = 56i64;
  if ( axis )
    v16 = 1384i64;
  v17 = v14;
  if ( v15 < 0.0099999998 )
  {
    *(int *)((char *)&gridData->buildChildFunction + v10) = *(int *)((char *)&gridData->buildChildFunction + v8);
    *(int *)((char *)&gridData->buildChildFunction + v16) = 0;
    return;
  }
  v18 = *(float *)((char *)&gridData->buildChildFunction + v16);
  v19 = (float)((float)((float)(gridData->springCoefficient * v14) - (float)((float)(fsqrt(gridData->springCoefficient) * 2.0) * v18)) * *(float *)&_XMM11) + v18;
  *(float *)((char *)&gridData->buildChildFunction + v16) = v19;
  v20 = I_fclamp(v19, COERCE_FLOAT(LODWORD(gridData->maxVelocity) ^ _xmm), gridData->maxVelocity);
  *(int *)((char *)&gridData->buildChildFunction + v16) = SLODWORD(v20);
  v21 = *(float *)&v20 * *(float *)&_XMM11;
  v22 = (float)(*(float *)&v20 * v17) >= 0.0;
  if ( (float)(v18 * v17) < 0.0 )
  {
    if ( (float)(*(float *)&v20 * v17) < 0.0 )
      goto LABEL_14;
  }
  else if ( (float)(*(float *)&v20 * v17) < 0.0 )
  {
LABEL_11:
    *(int *)((char *)&gridData->buildChildFunction + v10) = *(int *)((char *)&gridData->buildChildFunction + v8);
    *(int *)((char *)&gridData->buildChildFunction + v16) = 0;
    return;
  }
  if ( COERCE_FLOAT(LODWORD(v21) & _xmm) >= v15 )
    goto LABEL_11;
LABEL_14:
  v23 = LUIElement_Grid_ConvertPixelDistanceToLines(element, gridData, axis, *(float *)((char *)&gridData->buildChildFunction + v10), v21, luaVM);
  if ( v22 && (v24 = *(float *)((char *)&gridData->buildChildFunction + v8), (float)((float)(*(float *)((char *)&gridData->buildChildFunction + v10) - v24) * (float)(v23 - v24)) <= 0.0) )
  {
    *(float *)((char *)&gridData->buildChildFunction + v10) = v24;
    *(int *)((char *)&gridData->buildChildFunction + v16) = 0;
  }
  else
  {
    v25 = 28i64;
    if ( axis )
      v25 = 1356i64;
    *(float *)((char *)&gridData->buildChildFunction + v10) = v23;
    v26 = *(int *)((char *)&gridData->buildChildFunction + v25);
    if ( v26 >= 0 )
    {
      v27 = I_fclamp(v23, 0.0, (float)v26);
      *(int *)((char *)&gridData->buildChildFunction + v10) = SLODWORD(v27);
    }
  }
}

/*
==============
LUIElement_Grid_CalculateAlignmentOffset
==============
*/
float LUIElement_Grid_CalculateAlignmentOffset(LUIElement *grid, LUIGridData *gridData, LUIGridAxis axis, float gridSize, lua_State *luaVM)
{
  __int64 v6; 
  float result; 
  __int64 v11; 
  __int64 v12; 
  float v13; 
  float v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v18; 
  __int64 v19; 
  float v21; 
  float v22; 
  __int64 v23; 
  __int64 v24; 
  float v25; 
  __int64 v26; 
  __int64 v27; 

  v6 = 1340i64;
  if ( axis )
    v6 = 2668i64;
  if ( *((_BYTE *)&gridData->buildChildFunction + v6) )
  {
    if ( *((_BYTE *)&gridData->buildChildFunction + v6) == 1 )
    {
      _XMM1 = 0i64;
      v18 = 44i64;
      v19 = 48i64;
      if ( axis )
        v18 = 1372i64;
      if ( axis )
        v19 = 1376i64;
      __asm { vroundss xmm3, xmm1, xmm2, 1 }
      v21 = LUIElement_Grid_CalculateChildrenSize(grid, gridData, axis, *(int *)((char *)&gridData->buildChildFunction + v19), (int)*(float *)&_XMM3, luaVM);
      v22 = (float)(1.0 - (float)(*(float *)((char *)&gridData->buildChildFunction + v18) - (float)(int)*(float *)&_XMM3)) * LUIElement_Grid_CalculateChildrenSize(grid, gridData, axis, (int)*(float *)&_XMM3, (int)*(float *)&_XMM3, luaVM);
      v23 = 20i64;
      if ( axis )
        v23 = 1348i64;
      return v22 + (float)((float)((float)(gridSize + *(float *)((char *)&gridData->buildChildFunction + v23)) * 0.5) - v21);
    }
    else if ( *((_BYTE *)&gridData->buildChildFunction + v6) == 2 )
    {
      v11 = 52i64;
      v12 = 48i64;
      if ( axis )
        v11 = 1380i64;
      if ( axis )
        v12 = 1376i64;
      v13 = LUIElement_Grid_CalculateChildrenSize(grid, gridData, axis, *(int *)((char *)&gridData->buildChildFunction + v12), *(int *)((char *)&gridData->buildChildFunction + v11), luaVM);
      v14 = LUIElement_Grid_CalculateChildrenSize(grid, gridData, axis, *(int *)((char *)&gridData->buildChildFunction + v11), *(int *)((char *)&gridData->buildChildFunction + v11), luaVM);
      v15 = 44i64;
      if ( axis )
        v15 = 1372i64;
      v16 = 20i64;
      if ( axis )
        v16 = 1348i64;
      return (float)((float)((float)(*(int *)((char *)&gridData->buildChildFunction + v11) + 1) - *(float *)((char *)&gridData->buildChildFunction + v15)) * v14) + (float)((float)(gridSize - v13) + *(float *)((char *)&gridData->buildChildFunction + v16));
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 2868, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected alignment") )
        __debugbreak();
      return 0.0;
    }
  }
  else
  {
    v24 = 48i64;
    if ( axis )
      v24 = 1376i64;
    v25 = LUIElement_Grid_MeasureLine(grid, gridData, axis, *(int *)((char *)&gridData->buildChildFunction + v24), luaVM);
    v26 = 20i64;
    v27 = 44i64;
    if ( axis )
      v26 = 1348i64;
    if ( axis )
      v27 = 1372i64;
    LODWORD(result) = COERCE_UNSIGNED_INT((float)(*(float *)((char *)&gridData->buildChildFunction + v27) - (float)*(int *)((char *)&gridData->buildChildFunction + v24)) * (float)(v25 + *(float *)((char *)&gridData->buildChildFunction + v26))) ^ _xmm;
  }
  return result;
}

/*
==============
LUIElement_Grid_CalculateChildrenSize
==============
*/
float LUIElement_Grid_CalculateChildrenSize(LUIElement *grid, LUIGridData *gridData, LUIGridAxis axis, int lineStart, int lineEnd, lua_State *luaVM)
{
  int v6; 
  __int128 v10; 
  __int64 v11; 
  float v12; 
  __int128 v13; 

  v6 = lineStart;
  if ( lineStart > lineEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 2825, ASSERT_TYPE_ASSERT, "(lineStart <= lineEnd)", (const char *)&queryFormat, "lineStart <= lineEnd") )
    __debugbreak();
  v10 = 0i64;
  if ( v6 > lineEnd )
    return 0.0;
  v11 = 20i64;
  if ( axis )
    v11 = 1348i64;
  do
  {
    v12 = LUIElement_Grid_MeasureLine(grid, gridData, axis, v6++, luaVM) + *(float *)((char *)&gridData->buildChildFunction + v11);
    v13 = v10;
    *(float *)&v13 = *(float *)&v10 + v12;
    v10 = v13;
  }
  while ( v6 <= lineEnd );
  if ( *(float *)&v13 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 2834, ASSERT_TYPE_ASSERT, "(outSize >= 0.f)", (const char *)&queryFormat, "outSize >= 0.f") )
    __debugbreak();
  return *(float *)&v13;
}

/*
==============
LUIElement_Grid_ComputeAxisBoundaries
==============
*/
void LUIElement_Grid_ComputeAxisBoundaries(const LUIGridData *gridData, const LUIGridAxisData *axisData, float referenceLinePosition, int *outFirstElementIndex, int *outLastElementIndex)
{
  int v14; 
  int numLines; 

  if ( !outFirstElementIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 393, ASSERT_TYPE_ASSERT, "(outFirstElementIndex)", (const char *)&queryFormat, "outFirstElementIndex") )
    __debugbreak();
  if ( !outLastElementIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 394, ASSERT_TYPE_ASSERT, "(outLastElementIndex)", (const char *)&queryFormat, "outLastElementIndex") )
    __debugbreak();
  if ( !gridData->numChildren && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 395, ASSERT_TYPE_ASSERT, "(gridData->numChildren != 0)", (const char *)&queryFormat, "gridData->numChildren != 0") )
    __debugbreak();
  switch ( axisData->alignment )
  {
    case TOP:
      _XMM4 = 0i64;
      __asm { vroundss xmm2, xmm4, xmm1, 1 }
      *outFirstElementIndex = (int)*(float *)&_XMM2;
      _mm_cvtepi32_ps((__m128i)(unsigned int)axisData->maxVisibleLines);
      __asm { vroundss xmm1, xmm4, xmm3, 2 }
      v14 = (int)*(float *)&_XMM1;
      goto LABEL_18;
    case CENTER:
      _mm_cvtepi32_ps((__m128i)(unsigned int)axisData->maxVisibleLines);
      _XMM4 = 0i64;
      __asm { vroundss xmm0, xmm4, xmm2, 1 }
      *outFirstElementIndex = (int)*(float *)&_XMM0;
      _mm_cvtepi32_ps((__m128i)(unsigned int)axisData->maxVisibleLines);
      __asm { vroundss xmm2, xmm4, xmm3, 2 }
      v14 = (int)*(float *)&_XMM2;
LABEL_18:
      *outLastElementIndex = v14;
      break;
    case BOTTOM:
      _XMM3 = 0i64;
      __asm { vroundss xmm2, xmm3, xmm1, 2 }
      *outLastElementIndex = (int)*(float *)&_XMM2;
      _mm_cvtepi32_ps((__m128i)(unsigned int)axisData->maxVisibleLines);
      __asm { vroundss xmm0, xmm3, xmm2, 1 }
      *outFirstElementIndex = (int)*(float *)&_XMM0;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 418, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected alignment") )
        __debugbreak();
      break;
  }
  numLines = axisData->numLines;
  if ( numLines >= 0 )
  {
    *outFirstElementIndex = I_clamp(*outFirstElementIndex, 0, numLines - 1);
    *outLastElementIndex = I_clamp(*outLastElementIndex, 0, axisData->numLines - 1);
  }
}

/*
==============
LUIElement_Grid_ComputeAxisFloatingBoundaries
==============
*/
void LUIElement_Grid_ComputeAxisFloatingBoundaries(LUIElement *grid, LUIGridData *gridData, LUIGridAxis axis, float referenceLinePosition, float *outFirstElementLinePosition, float *outLastElementLinePosition, lua_State *luaVM)
{
  double v10; 
  __int128 *v11; 
  double v12; 
  float v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned int flags; 
  float v20; 
  __int64 v21; 
  __int64 v22; 
  unsigned int v23; 
  __int64 v24; 
  __int64 v25; 
  int v26; 
  double v27; 
  double v28; 
  __int128 v29; 
  double v30; 
  __int128 v31; 
  double v32; 

  if ( !outFirstElementLinePosition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 914, ASSERT_TYPE_ASSERT, "(outFirstElementLinePosition)", (const char *)&queryFormat, "outFirstElementLinePosition") )
    __debugbreak();
  if ( !outLastElementLinePosition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 915, ASSERT_TYPE_ASSERT, "(outLastElementLinePosition)", (const char *)&queryFormat, "outLastElementLinePosition") )
    __debugbreak();
  if ( !gridData->numChildren && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 916, ASSERT_TYPE_ASSERT, "(gridData->numChildren != 0)", (const char *)&queryFormat, "gridData->numChildren != 0") )
    __debugbreak();
  if ( axis )
  {
    v12 = *(double *)grid->currentAnimationState.position.y.anchors;
    v31 = *(_OWORD *)grid->currentAnimationState.position.y.offsets;
    v32 = v12;
    v11 = &v31;
  }
  else
  {
    v10 = *(double *)grid->currentAnimationState.position.x.anchors;
    v29 = *(_OWORD *)grid->currentAnimationState.position.x.offsets;
    v30 = v10;
    v11 = &v29;
  }
  v13 = LUI_Measure((LUIElementAxisPosition *)v11);
  v14 = 1340i64;
  v15 = 28i64;
  if ( axis )
    v14 = 2668i64;
  if ( *((_BYTE *)&gridData->buildChildFunction + v14) )
  {
    if ( *((_BYTE *)&gridData->buildChildFunction + v14) == 1 )
    {
      flags = grid->currentAnimationState.flags;
      v20 = v13 * 0.5;
      if ( (flags & 2) == 0 || gridData->pendingDimensionUpdate || (flags & 1) == 0 )
        goto LABEL_37;
      v21 = 28i64;
      if ( axis )
        v21 = 1356i64;
      if ( *(int *)((char *)&gridData->buildChildFunction + v21) >= 0 )
      {
        *outFirstElementLinePosition = LUIElement_Grid_ConvertPixelDistanceToLines(grid, gridData, axis, referenceLinePosition, COERCE_FLOAT(LODWORD(v20) ^ _xmm), luaVM);
        *outLastElementLinePosition = LUIElement_Grid_ConvertPixelDistanceToLines(grid, gridData, axis, referenceLinePosition, v20, luaVM);
      }
      else
      {
LABEL_37:
        v22 = 32i64;
        if ( axis )
          v22 = 1360i64;
        *outFirstElementLinePosition = referenceLinePosition - (float)((float)*(int *)((char *)&gridData->buildChildFunction + v22) * 0.5);
        *outLastElementLinePosition = (float)((float)*(int *)((char *)&gridData->buildChildFunction + v22) * 0.5) + referenceLinePosition;
      }
    }
    else if ( *((_BYTE *)&gridData->buildChildFunction + v14) == 2 )
    {
      *outLastElementLinePosition = referenceLinePosition;
      v16 = grid->currentAnimationState.flags;
      if ( (v16 & 2) == 0 || gridData->pendingDimensionUpdate || (v16 & 1) == 0 )
        goto LABEL_27;
      v17 = 28i64;
      if ( axis )
        v17 = 1356i64;
      if ( *(int *)((char *)&gridData->buildChildFunction + v17) >= 0 )
      {
        *outFirstElementLinePosition = LUIElement_Grid_ConvertPixelDistanceToLines(grid, gridData, axis, referenceLinePosition, COERCE_FLOAT(LODWORD(v13) ^ _xmm), luaVM);
      }
      else
      {
LABEL_27:
        v18 = 32i64;
        if ( axis )
          v18 = 1360i64;
        *outFirstElementLinePosition = referenceLinePosition - (float)*(int *)((char *)&gridData->buildChildFunction + v18);
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 965, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected alignment") )
    {
      __debugbreak();
    }
  }
  else
  {
    *outFirstElementLinePosition = referenceLinePosition;
    v23 = grid->currentAnimationState.flags;
    if ( (v23 & 2) == 0 || gridData->pendingDimensionUpdate || (v23 & 1) == 0 )
      goto LABEL_47;
    v24 = 28i64;
    if ( axis )
      v24 = 1356i64;
    if ( *(int *)((char *)&gridData->buildChildFunction + v24) >= 0 )
    {
      *outLastElementLinePosition = LUIElement_Grid_ConvertPixelDistanceToLines(grid, gridData, axis, referenceLinePosition, v13, luaVM);
    }
    else
    {
LABEL_47:
      v25 = 32i64;
      if ( axis )
        v25 = 1360i64;
      *outLastElementLinePosition = (float)*(int *)((char *)&gridData->buildChildFunction + v25) + referenceLinePosition;
    }
  }
  if ( axis )
    v15 = 1356i64;
  v26 = *(int *)((char *)&gridData->buildChildFunction + v15);
  if ( v26 >= 0 )
  {
    v27 = I_fclamp(*outFirstElementLinePosition, 0.0, (float)v26);
    *outFirstElementLinePosition = *(float *)&v27;
    v28 = I_fclamp(*outLastElementLinePosition, 0.0, (float)*(int *)((char *)&gridData->buildChildFunction + v15));
    *outLastElementLinePosition = *(float *)&v28;
  }
}

/*
==============
LUIElement_Grid_ComputeLineMaxFromMin
==============
*/
__int64 LUIElement_Grid_ComputeLineMaxFromMin(LUIGridAxis axis, lua_State *luaVM)
{
  LUIElement *v4; 
  LUIGridData *GridData; 
  double v6; 
  __int64 v7; 
  __int64 v8; 
  float v9; 
  int v10; 
  double v11; 
  unsigned int flags; 
  float AxisLength; 
  float v14; 
  __int64 v15; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:ComputeRowBottomFromTop( top ) or element:ComputeColumnRightFromLeft( left )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v4 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v4, luaVM);
    v6 = lua_tonumber32(luaVM, 2);
    v7 = 28i64;
    v8 = 28i64;
    if ( axis )
      v8 = 1356i64;
    v9 = *(float *)&v6;
    v10 = *(int *)((char *)&GridData->buildChildFunction + v8);
    if ( v10 >= 0 )
    {
      v11 = I_fclamp(*(float *)&v6, 0.0, (float)v10);
      v9 = *(float *)&v11;
    }
    if ( GridData->pendingDimensionUpdate )
      goto LABEL_19;
    flags = v4->currentAnimationState.flags;
    if ( (flags & 1) == 0 )
      goto LABEL_19;
    if ( axis )
      v7 = 1356i64;
    if ( *(int *)((char *)&GridData->buildChildFunction + v7) >= 0 && (flags & 2) != 0 )
    {
      AxisLength = LUIElement_Grid_GetAxisLength(v4, axis);
      v14 = LUIElement_Grid_ConvertPixelDistanceToLines(v4, GridData, axis, v9, AxisLength, luaVM);
    }
    else
    {
LABEL_19:
      v15 = 32i64;
      if ( axis )
        v15 = 1360i64;
      v14 = (float)*(int *)((char *)&GridData->buildChildFunction + v15) + v9;
    }
    j_lua_pushnumber(luaVM, v14);
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
__int64 LUIElement_Grid_ComputeLineMinFromMax(LUIGridAxis axis, lua_State *luaVM)
{
  LUIElement *v4; 
  LUIGridData *GridData; 
  double v6; 
  __int64 v7; 
  __int64 v8; 
  float v9; 
  int v10; 
  double v11; 
  unsigned int flags; 
  float AxisLength; 
  float v14; 
  __int64 v15; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:ComputeRowTopFromBottom( bottom ) or element:ComputeColumnLeftFromRight( right )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v4 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v4, luaVM);
    v6 = lua_tonumber32(luaVM, 2);
    v7 = 28i64;
    v8 = 28i64;
    if ( axis )
      v8 = 1356i64;
    v9 = *(float *)&v6;
    v10 = *(int *)((char *)&GridData->buildChildFunction + v8);
    if ( v10 >= 0 )
    {
      v11 = I_fclamp(*(float *)&v6, 0.0, (float)v10);
      v9 = *(float *)&v11;
    }
    if ( GridData->pendingDimensionUpdate )
      goto LABEL_19;
    flags = v4->currentAnimationState.flags;
    if ( (flags & 1) == 0 )
      goto LABEL_19;
    if ( axis )
      v7 = 1356i64;
    if ( *(int *)((char *)&GridData->buildChildFunction + v7) >= 0 && (flags & 2) != 0 )
    {
      AxisLength = LUIElement_Grid_GetAxisLength(v4, axis);
      v14 = LUIElement_Grid_ConvertPixelDistanceToLines(v4, GridData, axis, v9, COERCE_FLOAT(LODWORD(AxisLength) ^ _xmm), luaVM);
    }
    else
    {
LABEL_19:
      v15 = 32i64;
      if ( axis )
        v15 = 1360i64;
      v14 = v9 - (float)*(int *)((char *)&GridData->buildChildFunction + v15);
    }
    j_lua_pushnumber(luaVM, v14);
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
double LUIElement_Grid_ComputeTransitionStep(LUIGridAxisData *axisData, int elementPositionOnAxis)
{
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float currentPosition; 
  float v12; 
  float v13; 

  v2 = FLOAT_1_0;
  switch ( axisData->alignment )
  {
    case TOP:
      currentPosition = axisData->currentPosition;
      if ( (float)elementPositionOnAxis >= currentPosition )
      {
        v12 = (float)axisData->maxVisibleLines + currentPosition;
        v13 = (float)(elementPositionOnAxis + 1);
        if ( v13 <= v12 )
          return I_fclamp(v2, 0.0, 1.0);
        v5 = v13 - v12;
      }
      else
      {
        v5 = currentPosition - (float)elementPositionOnAxis;
      }
      goto LABEL_18;
    case CENTER:
      v7 = axisData->currentPosition;
      v8 = (float)axisData->maxVisibleLines * 0.5;
      v9 = (float)elementPositionOnAxis;
      if ( v9 >= (float)(v7 - v8) )
      {
        v10 = (float)(v8 + v7) - 1.0;
        if ( v9 <= v10 )
          return I_fclamp(v2, 0.0, 1.0);
        v5 = v9 - v10;
      }
      else
      {
        v5 = (float)(v7 - v8) - v9;
      }
      goto LABEL_18;
    case BOTTOM:
      v3 = axisData->currentPosition;
      v4 = (float)(elementPositionOnAxis + 1);
      if ( v4 <= v3 )
      {
        v6 = v3 - (float)axisData->maxVisibleLines;
        if ( (float)elementPositionOnAxis >= v6 )
          return I_fclamp(v2, 0.0, 1.0);
        v5 = v6 - (float)elementPositionOnAxis;
      }
      else
      {
        v5 = v4 - v3;
      }
LABEL_18:
      v2 = 1.0 - v5;
      return I_fclamp(v2, 0.0, 1.0);
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 2730, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected alignment") )
    __debugbreak();
  return I_fclamp(v2, 0.0, 1.0);
}

/*
==============
LUIElement_Grid_ConvertLineDistanceToPixels
==============
*/

float __fastcall LUIElement_Grid_ConvertLineDistanceToPixels(LUIElement *grid, LUIGridData *gridData, LUIGridAxis axis, double lineStart, float lineEnd, lua_State *luaVM)
{
  __int64 v6; 
  float v9; 
  __int128 v14; 
  float result; 
  int v18; 
  int v20; 
  float v21; 
  float v22; 
  int v23; 
  float v24; 
  float v25; 
  __int128 v26; 

  v6 = 16i64;
  if ( axis )
    v6 = 1344i64;
  v9 = *(float *)&lineStart;
  __asm
  {
    vminss  xmm12, xmm3, xmm14
    vmaxss  xmm10, xmm3, xmm14
  }
  _XMM11 = 0i64;
  v14 = 0i64;
  result = 0.0;
  if ( *(float *)&lineStart != lineEnd )
  {
    _XMM3 = 0i64;
    __asm { vroundss xmm2, xmm3, xmm1, 1 }
    v18 = (int)*(float *)&_XMM2;
    __asm { vroundss xmm2, xmm3, xmm1, 2 }
    if ( v18 < (int)*(float *)&_XMM2 )
    {
      v20 = v18 + 1;
      do
      {
        v21 = (float)v18;
        if ( (float)v18 >= *(float *)&_XMM12 )
        {
          if ( (float)v20 <= *(float *)&_XMM10 )
            v22 = FLOAT_1_0;
          else
            v22 = *(float *)&_XMM10 - v21;
        }
        else
        {
          v22 = 1.0 - (float)(*(float *)&_XMM12 - v21);
        }
        v23 = *(_DWORD *)((char *)&gridData->maxVelocity + v6);
        if ( v23 > 0 && v18 == v23 - 1 )
          v24 = 0.0;
        else
          v24 = *(float *)((char *)&gridData->refreshChildFunction + v6);
        v25 = LUIElement_Grid_MeasureLine(grid, gridData, axis, v18++, luaVM);
        ++v20;
        v26 = v14;
        *(float *)&v26 = *(float *)&v14 + (float)((float)(v25 + v24) * v22);
        v14 = v26;
      }
      while ( v18 < (int)*(float *)&_XMM2 );
    }
    if ( v9 > lineEnd )
      LODWORD(v14) = v14 ^ _xmm;
    _XMM3 = LODWORD(FLOAT_N1_0);
    __asm
    {
      vcmpless xmm0, xmm11, xmm8
      vblendvps xmm2, xmm3, xmm9, xmm0
      vcmpless xmm1, xmm11, xmm0
      vblendvps xmm0, xmm3, xmm9, xmm1
    }
    if ( *(float *)&_XMM2 != *(float *)&_XMM0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 823, ASSERT_TYPE_ASSERT, "(I_fsign( pixelDistance ) == I_fsign( lineEnd - lineStart ))", (const char *)&queryFormat, "I_fsign( pixelDistance ) == I_fsign( lineEnd - lineStart )") )
      __debugbreak();
    return *(float *)&v14;
  }
  return result;
}

/*
==============
LUIElement_Grid_ConvertPixelDistanceToLines
==============
*/

float __fastcall LUIElement_Grid_ConvertPixelDistanceToLines(LUIElement *grid, LUIGridData *gridData, LUIGridAxis axis, double linePosition, float pixelOffset, lua_State *luaVM)
{
  __int64 v7; 
  float v9; 
  unsigned __int128 v16; 
  float v17; 
  float v19; 
  __int128 v20; 
  int v23; 
  __int128 v28; 
  int v31; 
  __int128 v33; 
  bool v34; 
  bool v35; 
  int v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  __int128 v42; 
  unsigned __int128 v43; 
  __int128 v44; 
  float v45; 
  __int128 v46; 
  int v47; 
  float v48; 
  __int128 v49; 
  __int64 v54; 
  __int64 v55; 

  _XMM0 = LODWORD(FLOAT_N1_0);
  v7 = 16i64;
  if ( axis )
    v7 = 1344i64;
  LODWORD(v9) = LODWORD(pixelOffset) & _xmm;
  _XMM8 = 0i64;
  __asm
  {
    vcmpless xmm1, xmm8, xmm11
    vblendvps xmm1, xmm0, xmm15, xmm1
  }
  _XMM6 = *(_OWORD *)&linePosition;
  v16 = 0i64;
  if ( COERCE_FLOAT(LODWORD(pixelOffset) & _xmm) > 0.0 )
  {
    v17 = *(float *)&_XMM1;
    _XMM13 = 0i64;
    while ( 1 )
    {
      v20 = 0i64;
      *(float *)&v20 = (float)*(int *)((char *)&gridData->maxVelocity + v7);
      v19 = *(float *)&v20;
      if ( *(float *)&v20 < 0.0 )
      {
        *(double *)&v20 = *(float *)&v20;
        _XMM0 = v20;
        __asm { vxorpd  xmm0, xmm0, xmm0 }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(double *)&_XMM0, v19) )
          __debugbreak();
      }
      v23 = *(_DWORD *)((char *)&gridData->maxVelocity + v7);
      __asm
      {
        vmaxss  xmm0, xmm6, xmm8
        vminss  xmm9, xmm0, xmm7
        vroundss xmm3, xmm13, xmm0, 1
      }
      v28 = _XMM9;
      *(float *)&v28 = *(float *)&_XMM9 - *(float *)&_XMM3;
      _XMM2 = v28;
      if ( (float)(*(float *)&_XMM9 - *(float *)&_XMM3) == 0.0 )
      {
        __asm { vroundss xmm2, xmm13, xmm1, 1 }
        v31 = (int)*(float *)&_XMM2;
        v33 = 0i64;
        *(float *)&v33 = (float)(int)*(float *)&_XMM2;
        _XMM9 = v33;
        if ( v23 >= 0 )
        {
          v34 = !v31 && pixelOffset <= 0.0;
          v35 = v31 == v23 && pixelOffset >= 0.0;
          if ( v34 || v35 )
            return (float)(int)*(float *)&_XMM2;
        }
        *(float *)&_XMM7 = FLOAT_1_0;
        if ( pixelOffset < 0.0 )
          --v31;
      }
      else
      {
        __asm
        {
          vcmpltss xmm0, xmm8, xmm11
          vblendvps xmm7, xmm2, xmm1, xmm0
        }
        v31 = (int)*(float *)&_XMM3;
      }
      if ( v23 < 0 )
      {
        *(float *)&v55 = *(float *)((char *)&gridData->maxVelocity + v7);
        LODWORD(v54) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v54, v55) )
          __debugbreak();
      }
      v36 = *(_DWORD *)((char *)&gridData->maxVelocity + v7);
      if ( v23 < v31 )
        v31 = v23;
      if ( v31 < 0 )
        v31 = 0;
      if ( v36 > 0 && v31 == v36 - 1 )
        v37 = 0.0;
      else
        v37 = *(float *)((char *)&gridData->refreshChildFunction + v7);
      v38 = LUIElement_Grid_MeasureLine(grid, gridData, axis, v31, luaVM) + v37;
      v39 = v38 * *(float *)&_XMM7;
      v40 = v9 - *(float *)&v16;
      if ( (float)(v38 * *(float *)&_XMM7) >= 0.0099999998 )
      {
        if ( v39 >= v40 )
        {
          v45 = (float)(v40 / v38) * v17;
          v46 = _XMM9;
          *(float *)&v46 = *(float *)&_XMM9 + v45;
          _XMM6 = v46;
          v16 = LODWORD(pixelOffset) & (unsigned __int128)_xmm;
        }
        else
        {
          v43 = v16;
          *(float *)&v43 = *(float *)&v16 + v39;
          v16 = v43;
          v44 = _XMM9;
          *(float *)&v44 = *(float *)&_XMM9 + (float)(*(float *)&_XMM7 * v17);
          _XMM6 = v44;
        }
      }
      else
      {
        __asm { vroundss xmm2, xmm13, xmm1, 1 }
        v42 = 0i64;
        *(float *)&v42 = (float)(int)*(float *)&_XMM2;
        _XMM6 = v42;
      }
      v47 = *(_DWORD *)((char *)&gridData->maxVelocity + v7);
      if ( v47 >= 0 )
      {
        v49 = 0i64;
        *(float *)&v49 = (float)v47;
        v48 = *(float *)&v49;
        if ( *(float *)&v49 < 0.0 )
        {
          *(double *)&v49 = *(float *)&v49;
          _XMM0 = v49;
          __asm { vxorpd  xmm0, xmm0, xmm0 }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(double *)&_XMM0, v48) )
            __debugbreak();
        }
        __asm
        {
          vmaxss  xmm0, xmm6, xmm8
          vminss  xmm6, xmm0, xmm7
        }
      }
      if ( *(float *)&v16 >= v9 )
        return *(float *)&_XMM6;
    }
  }
  return *(float *)&linePosition;
}

/*
==============
LUIElement_Grid_ConvertPixelToLine
==============
*/
__int64 LUIElement_Grid_ConvertPixelToLine(LUIGridAxis axis, lua_State *luaVM)
{
  LUIElement *v5; 
  LUIGridData *GridData; 
  __int64 v7; 
  double v8; 
  double v9; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: element:Convert[Row|Column]PixelToLine( <starting_line>, <pixelOffset> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) )
  {
    v5 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v5, luaVM);
    if ( GridData->pendingDimensionUpdate || (v5->currentAnimationState.flags & 1) == 0 )
      goto LABEL_16;
    v7 = 28i64;
    if ( axis )
      v7 = 1356i64;
    if ( *(int *)((char *)&GridData->buildChildFunction + v7) < 0 )
    {
LABEL_16:
      __asm { vxorpd  xmm1, xmm1, xmm1; n }
    }
    else
    {
      v8 = lua_tonumber32(luaVM, 2);
      v9 = lua_tonumber32(luaVM, 3);
      *(double *)&_XMM1 = LUIElement_Grid_ConvertPixelDistanceToLines(v5, GridData, axis, v8, *(float *)&v9, luaVM);
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
  __int128 v2; 
  double v3; 
  LUIElementAxisPosition v5; 

  if ( axis )
  {
    v2 = *(_OWORD *)grid->currentAnimationState.position.y.offsets;
    v3 = *(double *)grid->currentAnimationState.position.y.anchors;
  }
  else
  {
    v2 = *(_OWORD *)grid->currentAnimationState.position.x.offsets;
    v3 = *(double *)grid->currentAnimationState.position.x.anchors;
  }
  *(_OWORD *)v5.offsets = v2;
  *(double *)v5.anchors = v3;
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
  LUIGridData *GridData; 
  __int64 v6; 
  float outFirstElementLinePosition; 
  float outLastElementLinePosition; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetRowBoundaries() or element:GetColumnBoundaries()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) && (v4 = LUI_ToElement(luaVM, 1), GridData = LUIElement_Grid_GetGridData(v4, luaVM), GridData->numChildren) )
  {
    v6 = 40i64;
    if ( axis )
      v6 = 1368i64;
    LUIElement_Grid_ComputeAxisFloatingBoundaries(v4, GridData, axis, *(float *)((char *)&GridData->buildChildFunction + v6), &outFirstElementLinePosition, &outLastElementLinePosition, luaVM);
    j_lua_pushnumber(luaVM, outFirstElementLinePosition);
    j_lua_pushnumber(luaVM, outLastElementLinePosition);
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
__int64 LUIElement_Grid_GetContentPixelSize(LUIGridAxis axis, lua_State *luaVM)
{
  LUIElement *v4; 
  LUIGridData *GridData; 
  __int64 v6; 
  __int64 v7; 
  float v8; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetVerticalPixelSize() or element:GetHorizontalPixelSize()");
  if ( j_lua_gettop(luaVM) != 1 )
    goto LABEL_14;
  if ( !j_lua_isuserdata(luaVM, 1) )
    goto LABEL_14;
  v4 = LUI_ToElement(luaVM, 1);
  GridData = LUIElement_Grid_GetGridData(v4, luaVM);
  if ( GridData->pendingDimensionUpdate || (v4->currentAnimationState.flags & 1) == 0 )
    goto LABEL_14;
  v6 = 28i64;
  v7 = 28i64;
  if ( axis )
    v7 = 1356i64;
  if ( *(int *)((char *)&GridData->buildChildFunction + v7) >= 0 )
  {
    if ( axis )
      v6 = 1356i64;
    v8 = LUIElement_Grid_ConvertLineDistanceToPixels(v4, GridData, axis, 0.0, (float)*(int *)((char *)&GridData->buildChildFunction + v6), luaVM);
    j_lua_pushnumber(luaVM, v8);
  }
  else
  {
LABEL_14:
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
  LUIElement *v5; 
  LUIGridData *GridData; 
  unsigned int flags; 
  double v9; 
  float v10; 
  LUIElementAxisPosition v12; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetColumnVisibleSize() or element:GetRowVisibleSize()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v5 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v5, luaVM);
    flags = v5->currentAnimationState.flags;
    if ( (flags & 1) != 0 )
    {
      if ( GridData->adjustSizeToContent || (flags & 2) == 0 )
      {
        v10 = LUIElement_Grid_MeasureRequestedVisibleContent(v5, GridData, axis, luaVM);
      }
      else
      {
        if ( axis )
        {
          v9 = *(double *)v5->currentAnimationState.position.y.anchors;
          *(_OWORD *)v12.offsets = *(_OWORD *)v5->currentAnimationState.position.y.offsets;
        }
        else
        {
          v9 = *(double *)v5->currentAnimationState.position.x.anchors;
          *(_OWORD *)v12.offsets = *(_OWORD *)v5->currentAnimationState.position.x.offsets;
        }
        *(double *)v12.anchors = v9;
        v10 = LUI_Measure(&v12);
      }
      *(double *)&_XMM1 = v10;
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
__int64 LUIElement_Grid_GetPixelBoundaries(LUIGridAxis axis, lua_State *luaVM)
{
  LUIElement *v4; 
  LUIGridData *GridData; 
  __int64 v6; 
  float v7; 
  float v8; 
  __int128 v9; 
  double v10; 
  float v11; 
  __int64 v12; 
  LUIElementAxisPosition v14; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetRowBoundaries() or element:GetColumnBoundaries()");
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) || (v4 = LUI_ToElement(luaVM, 1), GridData = LUIElement_Grid_GetGridData(v4, luaVM), !GridData->numChildren) )
  {
    j_lua_pushnil(luaVM);
    j_lua_pushnil(luaVM);
    return 2i64;
  }
  v6 = 40i64;
  if ( axis )
    v6 = 1368i64;
  v7 = 0.0;
  v8 = LUIElement_Grid_ConvertLineDistanceToPixels(v4, GridData, axis, 0.0, *(float *)((char *)&GridData->buildChildFunction + v6), luaVM);
  if ( axis )
  {
    v9 = *(_OWORD *)v4->currentAnimationState.position.y.offsets;
    v10 = *(double *)v4->currentAnimationState.position.y.anchors;
  }
  else
  {
    v9 = *(_OWORD *)v4->currentAnimationState.position.x.offsets;
    v10 = *(double *)v4->currentAnimationState.position.x.anchors;
  }
  *(_OWORD *)v14.offsets = v9;
  *(double *)v14.anchors = v10;
  v11 = LUI_Measure(&v14);
  v12 = 1340i64;
  if ( axis )
    v12 = 2668i64;
  if ( *((_BYTE *)&GridData->buildChildFunction + v12) )
  {
    if ( *((_BYTE *)&GridData->buildChildFunction + v12) != 1 )
    {
      if ( *((_BYTE *)&GridData->buildChildFunction + v12) == 2 )
      {
        v7 = v8 - v11;
      }
      else
      {
        v8 = 0.0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 1397, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected alignment") )
          __debugbreak();
      }
      goto LABEL_23;
    }
    v11 = v11 * 0.5;
    v7 = v8 - v11;
  }
  else
  {
    v7 = v8;
  }
  v8 = v11 + v8;
LABEL_23:
  j_lua_pushnumber(luaVM, v7);
  j_lua_pushnumber(luaVM, v8);
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
  LUIGridData *GridData; 
  __int64 v6; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetHorizontalSpacing() or element:GetVerticalSpacing()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v4 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v4, luaVM);
    v6 = 20i64;
    if ( axis )
      v6 = 1348i64;
    j_lua_pushnumber(luaVM, *(float *)((char *)&GridData->buildChildFunction + v6));
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
  LUIGridData *GridData; 
  __int64 v6; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetTargetRow() or element:GetTargetColumn()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v4 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v4, luaVM);
    v6 = 40i64;
    if ( axis )
      v6 = 1368i64;
    j_lua_pushnumber(luaVM, *(float *)((char *)&GridData->buildChildFunction + v6));
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
void LUIElement_Grid_Layout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  LUIGridData *customElementData; 
  bool v9; 
  bool v10; 

  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (LUIGridData *)element->customElementData;
  if ( customElementData->yData.maxVisibleLines >= 1 && customElementData->xData.maxVisibleLines >= 1 )
  {
    LUIElement_UpdateLayout(element, unitScale, deltaTime, luaVM);
    if ( customElementData->numChildren )
    {
      LUIElement_Grid_ApplyPhysics(element, customElementData, HORIZONTAL, unitScale, deltaTime, luaVM);
      LUIElement_Grid_ShuffleLines(customElementData, &customElementData->xData);
      if ( !customElementData->numChildren && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 2613, ASSERT_TYPE_ASSERT, "(gridData->numChildren != 0)", (const char *)&queryFormat, "gridData->numChildren != 0") )
        __debugbreak();
      LUIElement_Grid_ApplyPhysics(element, customElementData, VERTICAL, unitScale, deltaTime, luaVM);
      LUIElement_Grid_ShuffleLines(customElementData, &customElementData->yData);
    }
    element->layoutDeeplyCached = element->canCacheLayout;
    LUIElement_Grid_LayoutChildren(localClientNum, element, unitScale, deltaTime, customElementData, luaVM);
    LUI_Tween_InvalidateCache(element);
    LUI_QuadCache_Element_Invalidate(element);
    v9 = COERCE_FLOAT(COERCE_UNSIGNED_INT(customElementData->xData.targetPosition - customElementData->xData.currentPosition) & _xmm) < 0.0099999998 && COERCE_FLOAT(LODWORD(customElementData->xData.velocity) & _xmm) < 0.0099999998 && COERCE_FLOAT(COERCE_UNSIGNED_INT(customElementData->yData.targetPosition - customElementData->yData.currentPosition) & _xmm) < 0.0099999998 && COERCE_FLOAT(LODWORD(customElementData->yData.velocity) & _xmm) < 0.0099999998;
    v10 = element->canCacheLayout && v9;
    element->layoutDeeplyCached &= v10;
    element->layoutCached = v10;
  }
}

/*
==============
LUIElement_Grid_LayoutChildren
==============
*/
void LUIElement_Grid_LayoutChildren(LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, LUIGridData *gridData, lua_State *luaVM)
{
  LUIElement *v6; 
  LUIGridData *v8; 
  ntl::internal::list_node_base *mp_next; 
  char v11; 
  char v12; 
  ntl::internal::list_node_base *i; 
  float v14; 
  float v15; 
  ntl::internal::list_node_base *mp_prev; 
  double v17; 
  float v18; 
  double v19; 
  double v20; 
  bool v21; 
  bool v22; 
  double v23; 
  bool pendingDimensionUpdate; 
  LUIGridAxis primaryAxis; 
  __int64 v26; 
  LUIGridAxis secondaryAxis; 
  __int64 v28; 
  char *v29; 
  char v30; 
  char v31; 
  char v32; 
  char v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  double v38; 
  int v39; 
  int v40; 
  int v41; 
  double v42; 
  __int128 v50; 
  __int128 v51; 
  __int128 v52; 
  LUIElement *firstChild; 
  __int128 v54; 
  __int128 v55; 
  __int128 v56; 
  __int128 v57; 
  __int128 v58; 
  __int128 v59; 
  char v60; 
  char v61; 
  ntl::internal::list_node_base *v62; 
  int v63; 
  LUIElementAxisPosition v64; 
  LUIElementAxisPosition v65; 
  char gridDataa; 

  v6 = element;
  v8 = gridData;
  LUIElement_Grid_PopulateChildren(element, gridData, luaVM);
  LUIElement_Grid_UpdateChildrenTransitions(localClientNum, v6, gridData, luaVM);
  mp_next = gridData->gridContent.m_listHead.m_sentinel.mp_next;
  v11 = 0;
  v62 = mp_next;
  v12 = 0;
  v60 = 0;
  if ( mp_next != (ntl::internal::list_node_base *)&gridData->gridContent.m_listHead )
  {
    do
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      for ( i = mp_next[4].mp_prev; i != (ntl::internal::list_node_base *)&mp_next[3].mp_next; i = i->mp_next )
      {
        v14 = 0.0;
        v15 = 0.0;
        if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        mp_prev = i[1].mp_prev;
        if ( ((__int64)mp_prev[5].mp_prev & 1) != 0 && (HIDWORD(mp_prev[19].mp_next) & 0x6000) != 0 )
        {
          v17 = *(double *)&mp_prev[1].mp_prev;
          *(ntl::internal::list_node_base *)v64.offsets = *mp_prev;
          *(double *)v64.anchors = v17;
          v18 = LUI_Measure(&v64);
          v19 = *(double *)&mp_prev[2].mp_next;
          *(ntl::internal::list_node_base *)v65.offsets = *(ntl::internal::list_node_base *)((char *)mp_prev + 24);
          *(double *)v65.anchors = v19;
          v14 = v18;
          v15 = LUI_Measure(&v65);
        }
        LUIElement_Layout(localClientNum, (LUIElement *)mp_prev, unitScale, deltaTime, luaVM);
        if ( (HIDWORD(mp_prev[19].mp_next) & 0x6000) != 0 )
        {
          v20 = *(double *)&mp_prev[1].mp_prev;
          *(ntl::internal::list_node_base *)v65.offsets = *mp_prev;
          *(double *)v65.anchors = v20;
          LODWORD(v20) = COERCE_UNSIGNED_INT(v14 - LUI_Measure(&v65)) & _xmm;
          v21 = *(float *)&v20 < 0.0099999998;
          v22 = *(float *)&v20 == 0.0099999998;
          v23 = *(double *)&mp_prev[2].mp_next;
          v12 |= !v21 && !v22;
          *(ntl::internal::list_node_base *)v64.offsets = *(ntl::internal::list_node_base *)((char *)mp_prev + 24);
          *(double *)v64.anchors = v23;
          v60 |= COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - LUI_Measure(&v64)) & _xmm) > 0.0099999998;
        }
      }
      mp_next = v62->mp_next;
      v62 = mp_next;
    }
    while ( mp_next != (ntl::internal::list_node_base *)&gridData->gridContent.m_listHead );
    v8 = gridData;
    v6 = element;
    v11 = v60;
  }
  pendingDimensionUpdate = v8->pendingDimensionUpdate;
  if ( pendingDimensionUpdate )
  {
    if ( v8->adjustSizeToContent && (v6->currentAnimationState.flags & 1) != 0 )
    {
      LUIElement_Grid_AdjustBoundingBox(v6, v8, HORIZONTAL, luaVM);
      LUIElement_Grid_AdjustBoundingBox(v6, v8, VERTICAL, luaVM);
    }
    LUIElement_CalculateGlobalRectangle(v6, &v6->currentAnimationState);
    LUIElement_SetDimensions(v6, unitScale);
    v8->pendingDimensionUpdate = 0;
  }
  primaryAxis = v8->primaryAxis;
  v26 = 16i64;
  secondaryAxis = v8->secondaryAxis;
  v28 = 16i64;
  if ( primaryAxis )
    v28 = 1344i64;
  if ( secondaryAxis )
    v26 = 1344i64;
  v29 = (char *)v8 + v26;
  if ( pendingDimensionUpdate )
    goto LABEL_32;
  v30 = v11;
  if ( primaryAxis == HORIZONTAL )
    v30 = v12;
  if ( v30 )
  {
LABEL_32:
    v31 = 1;
    v61 = 1;
    if ( pendingDimensionUpdate )
    {
LABEL_37:
      v33 = 1;
      goto LABEL_38;
    }
  }
  else
  {
    v31 = 0;
    v61 = 0;
  }
  v32 = v11;
  if ( secondaryAxis == HORIZONTAL )
    v32 = v12;
  if ( v32 )
    goto LABEL_37;
  v33 = 0;
LABEL_38:
  gridDataa = v33;
  if ( v31 )
  {
    if ( v8->ensureClampedTargetLineOnDimensionsUpdate )
    {
      v34 = *(float *)((char *)&v8->xData.requestedNumLines + v28);
      LUIElement_Grid_SetTargetPosition(v6, v8, primaryAxis, v34, 1, 0, luaVM);
      v35 = *(float *)((char *)&v8->xData.requestedNumLines + v28);
      if ( v34 != v35 )
      {
        *(float *)((char *)&v8->xData.numLines + v28) = v35;
        *(float *)((char *)&v8->xData.targetPosition + v28) = 0.0;
        v6->canCacheLayout = 0;
      }
    }
  }
  if ( v33 )
  {
    if ( v8->ensureClampedTargetLineOnDimensionsUpdate )
    {
      v36 = *((float *)v29 + 6);
      LUIElement_Grid_SetTargetPosition(v6, v8, v8->secondaryAxis, v36, 1, 0, luaVM);
      v37 = *((float *)v29 + 6);
      if ( v36 != v37 )
      {
        *((float *)v29 + 7) = v37;
        *((_DWORD *)v29 + 10) = 0;
        v6->canCacheLayout = 0;
      }
    }
  }
  if ( v8->numChildren )
  {
    v38 = *(double *)v6->currentAnimationState.position.x.anchors;
    v39 = *(int *)((char *)&v8->xData.managedLines + v28);
    v40 = *(int *)((char *)&v8->xData.maxVisibleLines + v28);
    v41 = *((_DWORD *)v29 + 8);
    *(_OWORD *)v65.offsets = *(_OWORD *)v6->currentAnimationState.position.x.offsets;
    v52 = *(_OWORD *)v65.offsets;
    *(double *)v65.anchors = v38;
    v63 = v39;
    *(float *)&v52 = LUI_Measure(&v65);
    v42 = *(double *)v6->currentAnimationState.position.y.anchors;
    *(_OWORD *)v65.offsets = *(_OWORD *)v6->currentAnimationState.position.y.offsets;
    *(double *)v65.anchors = v42;
    _XMM7 = v52;
    *(float *)&v52 = LUI_Measure(&v65);
    _XMM1 = (unsigned int)v8->primaryAxis;
    __asm { vpcmpeqd xmm3, xmm1, xmm2 }
    _XMM6 = v52;
    __asm { vblendvps xmm3, xmm6, xmm7, xmm3; gridSize }
    *(float *)&v52 = LUIElement_Grid_CalculateAlignmentOffset(v6, v8, v8->primaryAxis, *(float *)&_XMM3, luaVM);
    __asm
    {
      vpcmpeqd xmm3, xmm1, xmm2
      vblendvps xmm3, xmm7, xmm6, xmm3; gridSize
    }
    v50 = v52;
    v51 = v52;
    *(float *)&v52 = LUIElement_Grid_CalculateAlignmentOffset(v6, v8, v8->secondaryAxis, *(float *)&_XMM3, luaVM);
    firstChild = v6->firstChild;
    v54 = v52;
    if ( firstChild )
    {
      while ( 1 )
      {
        LUIElement_Grid_OverrideAnimationState(v8->primaryAxis, firstChild, &firstChild->currentAnimationState, *(float *)&v51);
        LUIElement_Grid_OverrideAnimationState(v8->secondaryAxis, firstChild, &firstChild->currentAnimationState, *(float *)&v54);
        firstChild->layoutCached = 0;
        LUIElement_Layout(localClientNum, firstChild, unitScale, 0, luaVM);
        v6->layoutDeeplyCached &= firstChild->layoutDeeplyCached;
        *(float *)&v52 = LUIElement_Grid_MeasureLine(v6, v8, v8->primaryAxis, v40, luaVM);
        v55 = v52;
        *(float *)&v52 = LUIElement_Grid_MeasureLine(v6, v8, v8->secondaryAxis, v41, luaVM);
        firstChild = firstChild->nextSibling;
        if ( !firstChild )
          break;
        if ( v40 == v63 )
        {
          v56 = v52;
          *(float *)&v56 = *(float *)&v52 + *((float *)v29 + 1);
          v52 = v56;
          v40 = *(int *)((char *)&v8->xData.maxVisibleLines + v28);
          ++v41;
          v57 = v54;
          *(float *)&v57 = *(float *)&v54 + *(float *)&v52;
          v54 = v57;
          v51 = v50;
        }
        else
        {
          v58 = v55;
          *(float *)&v58 = *(float *)&v55 + *(float *)((char *)&v8->refreshChildFunction + v28);
          v52 = v58;
          v59 = v51;
          *(float *)&v59 = *(float *)&v51 + *(float *)&v52;
          v51 = v59;
          ++v40;
        }
      }
    }
    v33 = gridDataa;
  }
  if ( (v61 || v33) && LUI_BeginEventWithElement(localClientNum, v6, "grid_size_updated", luaVM) )
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
  __int64 v5; 
  unsigned __int64 v6; 
  __int64 v7; 
  __int64 v11; 
  float result; 
  int v14; 
  __int64 v15; 
  char *v16; 
  char *v17; 
  int v18; 
  char *v19; 
  char v20; 
  int v21; 
  ntl::internal::list_node_base *ElementAtPosition_Internal; 
  ntl::internal::list_node_base *v23; 
  double v25; 
  __int128 *v26; 
  double v27; 
  __int64 v28; 
  int v29; 
  double v30; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_node_base *mp_prev; 
  __int64 v33; 
  ntl::internal::list_node_base v34; 
  double v35; 
  __int128 v36; 
  double v37; 
  int v38; 

  v5 = 28i64;
  v6 = (unsigned int)lineNumber;
  v7 = 28i64;
  if ( axis )
    v7 = 1356i64;
  if ( *(int *)((char *)&gridData->buildChildFunction + v7) >= 0 )
  {
    if ( lineNumber < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 711, ASSERT_TYPE_ASSERT, "(lineNumber >= 0)", (const char *)&queryFormat, "lineNumber >= 0") )
      __debugbreak();
    if ( (int)v6 >= *(int *)((char *)&gridData->buildChildFunction + v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 712, ASSERT_TYPE_ASSERT, "(lineNumber < axisData->numLines)", (const char *)&queryFormat, "lineNumber < axisData->numLines") )
      __debugbreak();
  }
  v11 = 60i64;
  if ( axis )
    v11 = 1388i64;
  LODWORD(_XMM6) = 0;
  result = *(float *)((char *)&gridData->buildChildFunction + v11);
  if ( result <= 0.0 )
  {
    v14 = 0x4000;
    v15 = 896i64;
    if ( axis == HORIZONTAL )
      v14 = 0x2000;
    v38 = v14;
    if ( axis )
      v15 = 2224i64;
    v16 = (char *)gridData + v15;
    if ( v6 % 0x35 >= 0x35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v17 = &v16[8 * (v6 % 0x35)];
    v18 = 0;
    v19 = *(char **)v17;
    if ( *(char **)v17 == v17 )
    {
LABEL_26:
      v19 = NULL;
    }
    else
    {
      while ( 1 )
      {
        if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( *((_DWORD *)v19 + 2) == (_DWORD)v6 )
          break;
        v19 = *(char **)v19;
        if ( v19 == v17 )
          goto LABEL_26;
      }
    }
    if ( v19 )
    {
      LODWORD(_XMM6) = *((_DWORD *)v19 + 3);
LABEL_68:
      if ( *(float *)&_XMM6 < 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 780, ASSERT_TYPE_ASSERT, "(lineSize >= 1.f)", (const char *)&queryFormat, "lineSize >= 1.f") )
        __debugbreak();
      return *(float *)&_XMM6;
    }
    v20 = 0;
    if ( gridData->buildChildFunction == -2 )
    {
      if ( axis == HORIZONTAL )
        v5 = 1356i64;
      if ( *(int *)((char *)&gridData->buildChildFunction + v5) <= 0 )
        goto LABEL_65;
      do
      {
        v21 = v18;
        if ( axis == gridData->primaryAxis )
          v21 = v6;
        ElementAtPosition_Internal = LUIElement_Grid_GetElementAtPosition_Internal(gridData, v21, (int)v6 + v18 - v21);
        v23 = ElementAtPosition_Internal;
        if ( ElementAtPosition_Internal )
        {
          if ( ((__int64)ElementAtPosition_Internal[5].mp_prev & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 735, ASSERT_TYPE_ASSERT, "(child->currentAnimationState.flags & ( 1 << 0 ))", (const char *)&queryFormat, "child->currentAnimationState.flags & LUI_ANIMSTATE_INITIALIZED") )
            __debugbreak();
          if ( axis )
          {
            _XMM0 = *(_OWORD *)&v23[1].mp_next;
            v27 = *(double *)&v23[2].mp_next;
            v36 = _XMM0;
            v37 = v27;
            v26 = &v36;
          }
          else
          {
            _XMM0 = (__int128)*v23;
            v25 = *(double *)&v23[1].mp_prev;
            v34 = *v23;
            v35 = v25;
            v26 = (__int128 *)&v34;
          }
          *(float *)&_XMM0 = LUI_Measure((LUIElementAxisPosition *)v26);
          __asm { vmaxss  xmm6, xmm0, xmm6 }
          v20 |= (v38 & HIDWORD(v23[19].mp_next)) != 0;
        }
        ++v18;
      }
      while ( v18 < *(int *)((char *)&gridData->buildChildFunction + v5) );
    }
    else
    {
      v28 = 1336i64;
      if ( axis )
        v28 = 2664i64;
      if ( !*(int *)((char *)&gridData->buildChildFunction + v28) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 746, ASSERT_TYPE_ASSERT, "(axisData->measureLineFunction)", (const char *)&queryFormat, "axisData->measureLineFunction") )
        __debugbreak();
      if ( !LUI_ElementHasWeakTableEntry(grid, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 747, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( grid, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( grid, luaVM )") )
        __debugbreak();
      LUI_PutElementOnTopOfStack(grid, luaVM);
      j_lua_getfield(luaVM, -1, "_gridFunctionRefs");
      j_lua_rawgeti(luaVM, -1, *(int *)((char *)&gridData->buildChildFunction + v28));
      j_lua_remove(luaVM, -2);
      j_lua_remove(luaVM, -2);
      j_lua_pushnumber(luaVM, (float)(int)v6);
      LUI_PutElementOnTopOfStack(grid, luaVM);
      v29 = LuaShared_PCall(luaVM, 2, 1);
      if ( v29 )
      {
        LUI_ReportError("Error while measuring UI grid content.\n", luaVM);
        LUI_HandleLuaError(v29);
      }
      if ( !j_lua_isnumber(luaVM, -1) )
        LUI_ReportError("Invalid grid element measurements.\n", luaVM);
      v30 = lui_tonumber32(luaVM, -1);
      LODWORD(_XMM6) = LODWORD(v30);
      j_lua_settop(luaVM, -2);
      mp_next = gridData->gridContent.m_listHead.m_sentinel.mp_next;
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      mp_prev = mp_next[4].mp_prev;
      if ( !mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v20 = (v38 & HIDWORD(mp_prev[1].mp_prev[19].mp_next)) != 0;
    }
    if ( v20 )
      goto LABEL_68;
LABEL_65:
    v33 = 64i64;
    if ( axis )
      v33 = 1392i64;
    LUICache<int,float,20,ntl::hash<int>>::store((LUICache<int,float,20,ntl::hash<int> > *)((char *)gridData + v33), v6, *(float *)&_XMM6);
    goto LABEL_68;
  }
  return result;
}

/*
==============
LUIElement_Grid_MeasureRequestedVisibleContent
==============
*/
float LUIElement_Grid_MeasureRequestedVisibleContent(LUIElement *element, LUIGridData *gridData, LUIGridAxis axis, lua_State *luaVM)
{
  __int64 v9; 
  const LUIGridAxisData *v10; 
  int v11; 
  int v12; 
  __int128 v13; 
  bool i; 
  float spacing; 
  float v16; 
  __int128 v17; 
  int outLastElementIndex[4]; 
  int outFirstElementIndex; 

  if ( !gridData->numChildren )
    return 0.0;
  v9 = 16i64;
  if ( axis )
    v9 = 1344i64;
  v10 = (const LUIGridAxisData *)((char *)gridData + v9);
  LUIElement_Grid_ComputeAxisBoundaries(gridData, v10, 0.0, &outFirstElementIndex, outLastElementIndex);
  v11 = outFirstElementIndex;
  v12 = outLastElementIndex[0];
  v13 = 0i64;
  for ( i = outFirstElementIndex == outLastElementIndex[0]; v11 <= v12; i = v11 == v12 )
  {
    if ( i )
      spacing = 0.0;
    else
      spacing = v10->spacing;
    v16 = LUIElement_Grid_MeasureLine(element, gridData, axis, v11++, luaVM);
    v17 = v13;
    *(float *)&v17 = *(float *)&v13 + (float)(v16 + spacing);
    v13 = v17;
  }
  return *(float *)&v13;
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
void LUIElement_Grid_OverrideAnimationState(LUIGridAxis axis, LUIElement *child, LUIAnimationState *state, float position)
{
  __int128 v6; 
  double v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  LUIElementAxisPosition v12; 

  if ( axis )
  {
    v6 = *(_OWORD *)child->currentAnimationState.position.y.offsets;
    v7 = *(double *)child->currentAnimationState.position.y.anchors;
  }
  else
  {
    v6 = *(_OWORD *)child->currentAnimationState.position.x.offsets;
    v7 = *(double *)child->currentAnimationState.position.x.anchors;
  }
  *(_OWORD *)v12.offsets = v6;
  *(double *)v12.anchors = v7;
  v8 = LUI_Measure(&v12);
  v9 = COERCE_FLOAT(LODWORD(v8) & _xmm) + position;
  if ( axis )
  {
    state->position.y.offsets[0] = position;
    state->position.y.offsets[1] = v9;
    state->position.y.anchors[0] = 0.0;
    state->position.y.anchors[1] = 1.0;
  }
  else
  {
    state->position.x.offsets[0] = position;
    state->position.x.offsets[1] = v9;
    state->position.x.anchors[0] = 0.0;
    state->position.x.anchors[1] = 1.0;
  }
  if ( v8 < 0.0 )
  {
    if ( axis )
    {
      v11 = state->position.y.offsets[1];
      state->position.y.offsets[1] = state->position.y.offsets[0];
      state->position.y.offsets[0] = v11;
    }
    else
    {
      v10 = state->position.x.offsets[1];
      state->position.x.offsets[1] = state->position.x.offsets[0];
      state->position.x.offsets[0] = v10;
    }
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
  int v10; 
  bool v11; 
  int v12; 

  if ( !grid->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (LUIGridData *)grid->customElementData;
  if ( customElementData->buildChildFunction == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 2346, ASSERT_TYPE_ASSERT, "(!LUIElement_Grid_UserSuppliesChildren( gridData ))", (const char *)&queryFormat, "!LUIElement_Grid_UserSuppliesChildren( gridData )") )
    __debugbreak();
  if ( LUIElement_Grid_IsPositionInDataSet_0(customElementData, primaryPosition, secondaryPosition) )
  {
    v10 = secondaryPosition;
    if ( customElementData->primaryAxis )
    {
      v10 = primaryPosition;
      primaryPosition = secondaryPosition;
    }
    if ( (!LUI_ElementHasWeakTableEntry(child, luaVM) || !LUI_ElementHasWeakTableEntry(grid, luaVM)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 2364, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( child, luaVM ) && LUI_ElementHasWeakTableEntry( grid, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( child, luaVM ) && LUI_ElementHasWeakTableEntry( grid, luaVM )") )
      __debugbreak();
    LUI_PutElementOnTopOfStack(child, luaVM);
    j_lua_getfield(luaVM, -1, "_gridContentRowIndex");
    if ( j_lua_isnumber(luaVM, -1) )
      v11 = lui_tointeger32(luaVM, -1) != v10;
    else
      v11 = 1;
    j_lua_settop(luaVM, -2);
    j_lua_getfield(luaVM, -1, "_gridContentColumnIndex");
    if ( !j_lua_isnumber(luaVM, -1) || v11 || lui_tointeger32(luaVM, -1) != primaryPosition )
      v11 = 1;
    j_lua_settop(luaVM, -2);
    j_lua_settop(luaVM, -2);
    if ( v11 && customElementData->refreshChildFunction != -2 )
    {
      LUI_PutElementOnTopOfStack(child, luaVM);
      j_lua_pushinteger(luaVM, v10);
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
      j_lua_pushnumber(luaVM, (float)primaryPosition);
      j_lua_pushnumber(luaVM, (float)v10);
      v12 = LuaShared_PCall(luaVM, 3, 0);
      if ( v12 )
      {
        LUI_ReportError("Error while updating UI grid content.\n", luaVM);
        LUI_HandleLuaError(v12);
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
  __int64 v5; 
  float v9; 
  __int64 v10; 
  __int64 v11; 

  v5 = 1340i64;
  if ( axis )
    v5 = 2668i64;
  if ( *((_BYTE *)&gridData->buildChildFunction + v5) )
  {
    if ( *((_BYTE *)&gridData->buildChildFunction + v5) == 1 )
    {
      v11 = 32i64;
      if ( axis )
        v11 = 1360i64;
      v9 = (float)*(int *)((char *)&gridData->buildChildFunction + v11) * 0.5;
    }
    else
    {
      v9 = 0.0;
      if ( *((_BYTE *)&gridData->buildChildFunction + v5) == 2 )
      {
        v10 = 32i64;
        if ( axis )
          v10 = 1360i64;
        v9 = (float)*(int *)((char *)&gridData->buildChildFunction + v10);
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 1241, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected alignment") )
      {
        __debugbreak();
      }
    }
  }
  else
  {
    v9 = 0.0;
  }
  LUIElement_Grid_SetTargetPosition(grid, gridData, axis, v9, 1, 1, luaVM);
}

/*
==============
LUIElement_Grid_SetDimensions
==============
*/
void LUIElement_Grid_SetDimensions(LUIElement *grid, LUIGridData *gridData, lua_State *luaVM)
{
  int requestedNumChildren; 
  LUIGridAxis primaryAxis; 
  LUIGridAxis secondaryAxis; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  int v15; 
  __int64 v16; 
  __int64 v17; 
  int v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  int v28; 
  __int64 v31; 
  __int64 v32; 
  bool v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 

  requestedNumChildren = gridData->requestedNumChildren;
  primaryAxis = gridData->primaryAxis;
  secondaryAxis = gridData->secondaryAxis;
  if ( !requestedNumChildren )
    goto LABEL_68;
  v8 = 24i64;
  v9 = 24i64;
  if ( primaryAxis )
    v9 = 1352i64;
  v10 = *(int *)((char *)&gridData->buildChildFunction + v9);
  if ( !v10 )
    goto LABEL_68;
  if ( secondaryAxis )
    v8 = 1352i64;
  v11 = *(int *)((char *)&gridData->buildChildFunction + v8);
  if ( !v11 )
  {
LABEL_68:
    v12 = 28i64;
    v31 = 28i64;
    if ( primaryAxis )
      v31 = 1356i64;
    v15 = 0;
    *(int *)((char *)&gridData->buildChildFunction + v31) = 0;
    v32 = 28i64;
    if ( secondaryAxis )
      v32 = 1356i64;
    *(int *)((char *)&gridData->buildChildFunction + v32) = 0;
    goto LABEL_73;
  }
  if ( requestedNumChildren < 0 )
    goto LABEL_20;
  if ( v10 >= 0 )
  {
    if ( v11 >= 0 )
    {
      if ( requestedNumChildren <= v10 * (v11 - 1) )
        j_luaL_error(luaVM, (const char *)&queryFormat, "gridData->requestedNumChildren > primaryAxisData->requestedNumLines * ( secondaryAxisData->requestedNumLines -1 )");
      if ( requestedNumChildren > v11 * v10 )
        j_luaL_error(luaVM, (const char *)&queryFormat, "gridData->requestedNumChildren <= primaryAxisData->requestedNumLines * ( secondaryAxisData->requestedNumLines )");
      v12 = 28i64;
      v13 = 28i64;
      if ( primaryAxis )
        v13 = 1356i64;
      v14 = 28i64;
      if ( secondaryAxis )
        v14 = 1356i64;
      *(int *)((char *)&gridData->buildChildFunction + v13) = v10;
      *(int *)((char *)&gridData->buildChildFunction + v14) = *(int *)((char *)&gridData->buildChildFunction + v8);
      v15 = gridData->requestedNumChildren;
      goto LABEL_73;
    }
LABEL_20:
    if ( v10 >= 0 && v11 >= 0 )
    {
      v12 = 28i64;
      v16 = 28i64;
      if ( primaryAxis )
        v16 = 1356i64;
      v17 = 28i64;
      if ( secondaryAxis )
        v17 = 1356i64;
      *(int *)((char *)&gridData->buildChildFunction + v16) = v10;
      v18 = *(int *)((char *)&gridData->buildChildFunction + v8);
      *(int *)((char *)&gridData->buildChildFunction + v17) = v18;
      v15 = v18 * *(int *)((char *)&gridData->buildChildFunction + v16);
      goto LABEL_73;
    }
  }
  if ( requestedNumChildren >= 0 )
  {
    if ( v10 >= 0 )
    {
      v12 = 28i64;
      v19 = 28i64;
      if ( v10 < requestedNumChildren )
        requestedNumChildren = v10;
      if ( primaryAxis )
        v19 = 1356i64;
      *(int *)((char *)&gridData->buildChildFunction + v19) = requestedNumChildren;
      v20 = 28i64;
      if ( secondaryAxis )
        v20 = 1356i64;
LABEL_43:
      _XMM3 = 0i64;
      __asm { vroundss xmm3, xmm3, xmm2, 2 }
      *(int *)((char *)&gridData->buildChildFunction + v20) = (int)*(float *)&_XMM3;
      v15 = gridData->requestedNumChildren;
      goto LABEL_73;
    }
    if ( v11 >= 0 )
    {
      v12 = 28i64;
      v21 = 28i64;
      if ( v11 < requestedNumChildren )
        requestedNumChildren = v11;
      if ( secondaryAxis )
        v21 = 1356i64;
      *(int *)((char *)&gridData->buildChildFunction + v21) = requestedNumChildren;
      v20 = 28i64;
      if ( primaryAxis )
        v20 = 1356i64;
      goto LABEL_43;
    }
  }
  v12 = 28i64;
  v24 = 28i64;
  if ( secondaryAxis )
    v24 = 1356i64;
  v25 = 28i64;
  if ( primaryAxis )
    v25 = 1356i64;
  if ( requestedNumChildren < 0 )
  {
    if ( v10 < 0 )
    {
      if ( v11 < 0 )
      {
        v15 = -1;
        *(int *)((char *)&gridData->buildChildFunction + v25) = -1;
        *(int *)((char *)&gridData->buildChildFunction + v24) = -1;
      }
      else
      {
        *(int *)((char *)&gridData->buildChildFunction + v24) = v11;
        *(int *)((char *)&gridData->buildChildFunction + v25) = -1;
        v15 = -(*(int *)((char *)&gridData->buildChildFunction + v24) != 0);
      }
    }
    else
    {
      *(int *)((char *)&gridData->buildChildFunction + v25) = v10;
      *(int *)((char *)&gridData->buildChildFunction + v24) = -1;
      v15 = -(*(int *)((char *)&gridData->buildChildFunction + v25) != 0);
    }
  }
  else
  {
    v26 = 32i64;
    v27 = 32i64;
    if ( primaryAxis )
      v27 = 1360i64;
    v28 = *(int *)((char *)&gridData->buildChildFunction + v27);
    if ( v28 == 1 )
    {
      *(int *)((char *)&gridData->buildChildFunction + v25) = 1;
      *(int *)((char *)&gridData->buildChildFunction + v24) = gridData->requestedNumChildren;
      v15 = gridData->requestedNumChildren;
    }
    else
    {
      if ( secondaryAxis )
        v26 = 1360i64;
      if ( *(int *)((char *)&gridData->buildChildFunction + v26) == 1 )
      {
        *(int *)((char *)&gridData->buildChildFunction + v25) = requestedNumChildren;
        *(int *)((char *)&gridData->buildChildFunction + v24) = 1;
        v15 = gridData->requestedNumChildren;
      }
      else
      {
        if ( v28 < requestedNumChildren )
          requestedNumChildren = *(int *)((char *)&gridData->buildChildFunction + v27);
        *(int *)((char *)&gridData->buildChildFunction + v25) = requestedNumChildren;
        if ( requestedNumChildren )
        {
          _XMM3 = 0i64;
          __asm { vroundss xmm3, xmm3, xmm2, 2 }
          *(int *)((char *)&gridData->buildChildFunction + v24) = (int)*(float *)&_XMM3;
        }
        else
        {
          *(int *)((char *)&gridData->buildChildFunction + v24) = 0;
        }
        v15 = gridData->requestedNumChildren;
      }
    }
  }
LABEL_73:
  gridData->numChildren = v15;
  v33 = gridData->buildChildFunction == -2;
  gridData->pendingDimensionUpdate = 1;
  if ( v33 )
  {
    v34 = 36i64;
    v35 = 36i64;
    v36 = 28i64;
    if ( primaryAxis )
    {
      v35 = 1364i64;
      v36 = 1356i64;
    }
    if ( *(int *)((char *)&gridData->buildChildFunction + v36) > *(int *)((char *)&gridData->buildChildFunction + v35) )
      j_luaL_error(luaVM, (const char *)&queryFormat, "primaryAxisData->numLines <= primaryAxisData->managedLines");
    if ( secondaryAxis )
      v34 = 1364i64;
    if ( secondaryAxis )
      v12 = 1356i64;
    if ( *(int *)((char *)&gridData->buildChildFunction + v12) > *(int *)((char *)&gridData->buildChildFunction + v34) )
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
__int64 LUIElement_Grid_SetNumChildrenInC_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIGridData *GridData; 

  if ( (j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2)) && (j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_type(luaVM, 3) != 1) )
    j_luaL_error(luaVM, "USAGE: element:SetNumChildrenInC( numChildren, optional:shouldRemoveExcessChildren )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_type(luaVM, 3) == 1 )
  {
    v2 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v2, luaVM);
    if ( GridData->buildChildFunction == -2 )
      j_luaL_error(luaVM, (const char *)&queryFormat, "!LUIElement_Grid_UserSuppliesChildren( gridData )");
    GridData->requestedNumChildren = lui_tointeger32(luaVM, 2);
    if ( j_lua_toboolean(luaVM, 3) )
      LUIElement_Grid_RemoveExcessChildren(v2, GridData, luaVM);
    LUIElement_Grid_SetDimensions(v2, GridData, luaVM);
    LUIElement_Grid_ShuffleLines(GridData, &GridData->xData);
    LUIElement_Grid_ShuffleLines(GridData, &GridData->yData);
    LUI_LUIElement_InvalidateLayout(v2);
  }
  return 0i64;
}

/*
==============
LUIElement_Grid_SetNumColumnsInC_impl
==============
*/
__int64 LUIElement_Grid_SetNumColumnsInC_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIGridData *GridData; 
  int v4; 
  int v5; 
  __int64 maxVisibleLines; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) && j_lua_type(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetNumColumnsInC( numChildren )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && (j_lua_isnumber(luaVM, 2) || !j_lua_type(luaVM, 2)) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v2, luaVM);
    if ( j_lua_type(luaVM, 2) )
    {
      v5 = lui_tointeger32(luaVM, 2);
      v4 = v5;
      if ( GridData->buildChildFunction == -2 )
      {
        if ( v5 > GridData->xData.managedLines )
          j_luaL_error(luaVM, (const char *)&queryFormat, "numLines <= axisData->managedLines");
      }
      else if ( GridData->forcePrimaryAxisScrolling )
      {
        if ( GridData->primaryAxis )
        {
          maxVisibleLines = (unsigned int)GridData->xData.maxVisibleLines;
          if ( v5 > (int)maxVisibleLines )
            j_luaL_error(luaVM, "Attempting to set number of columns to %d in a grid with max visible columns %d and force 1D scrolling set.", (unsigned int)v5, maxVisibleLines);
        }
      }
    }
    else
    {
      v4 = -1;
    }
    GridData->xData.requestedNumLines = v4;
    LUIElement_Grid_SetDimensions(v2, GridData, luaVM);
    LUIElement_Grid_LineUpElements(GridData, NULL, NULL, luaVM);
    LUIElement_Grid_ShuffleLines(GridData, &GridData->xData);
    LUIElement_Grid_ShuffleLines(GridData, &GridData->yData);
    LUI_LUIElement_InvalidateLayout(v2);
  }
  return 0i64;
}

/*
==============
LUIElement_Grid_SetNumRowsInC_impl
==============
*/
__int64 LUIElement_Grid_SetNumRowsInC_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIGridData *GridData; 
  int v4; 
  int v5; 
  __int64 maxVisibleLines; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) && j_lua_type(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetNumRowsInC( numChildren )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && (j_lua_isnumber(luaVM, 2) || !j_lua_type(luaVM, 2)) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v2, luaVM);
    if ( j_lua_type(luaVM, 2) )
    {
      v5 = lui_tointeger32(luaVM, 2);
      v4 = v5;
      if ( GridData->buildChildFunction == -2 )
      {
        if ( v5 > GridData->yData.managedLines )
          j_luaL_error(luaVM, (const char *)&queryFormat, "numLines <= axisData->managedLines");
      }
      else if ( GridData->forcePrimaryAxisScrolling && GridData->primaryAxis != VERTICAL )
      {
        maxVisibleLines = (unsigned int)GridData->yData.maxVisibleLines;
        if ( v5 > (int)maxVisibleLines )
          j_luaL_error(luaVM, "Attempting to set number of rows to %d in a grid with max visible rows %d and force 1D scrolling set.", (unsigned int)v5, maxVisibleLines);
      }
    }
    else
    {
      v4 = -1;
    }
    GridData->yData.requestedNumLines = v4;
    LUIElement_Grid_SetDimensions(v2, GridData, luaVM);
    LUIElement_Grid_LineUpElements(GridData, NULL, NULL, luaVM);
    LUIElement_Grid_ShuffleLines(GridData, &GridData->xData);
    LUIElement_Grid_ShuffleLines(GridData, &GridData->yData);
    LUI_LUIElement_InvalidateLayout(v2);
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
  LUIElement *v4; 
  char *customElementData; 
  double v6; 
  __int64 v7; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: element:SetRowSpacing( spacing ) or element:SetColumnSpacing( spacing )");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:SetRowSpacing( spacing ) or element:SetColumnSpacing( spacing )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetRowSpacing( spacing ) or element:SetColumnSpacing( spacing )");
  v4 = LUI_ToElement(luaVM, 1);
  if ( !v4->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (char *)v4->customElementData;
  v6 = lui_tonumber32(luaVM, 2);
  v7 = 20i64;
  if ( axis )
    v7 = 1348i64;
  *(float *)&customElementData[v7] = *(float *)&v6;
  LUI_LUIElement_InvalidateLayout(v4);
}

/*
==============
LUIElement_Grid_SetTargetLine
==============
*/
__int64 LUIElement_Grid_SetTargetLine(LUIGridAxis axis, lua_State *luaVM)
{
  LUIElement *v4; 
  LUIGridData *GridData; 
  double v6; 
  bool clamp; 
  int v8; 

  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_type(luaVM, 3) != 1 || j_lua_type(luaVM, 4) != 1 )
    j_luaL_error(luaVM, "USAGE: element:SetTargetRow( <row_index>, <clamp>, <snap> ) or element:SetTargetColumn( <column_index>, <clamp>, <snap> )");
  if ( j_lua_gettop(luaVM) == 4 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_type(luaVM, 3) == 1 && j_lua_type(luaVM, 4) == 1 )
  {
    v4 = LUI_ToElement(luaVM, 1);
    GridData = LUIElement_Grid_GetGridData(v4, luaVM);
    v6 = lui_tonumber32(luaVM, 2);
    clamp = j_lua_toboolean(luaVM, 3) > 0;
    v8 = j_lua_toboolean(luaVM, 4);
    LUIElement_Grid_SetTargetPosition(v4, GridData, axis, *(float *)&v6, clamp, v8 > 0, luaVM);
    LUI_LUIElement_InvalidateLayout(v4);
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
  __int128 v7; 
  __int128 v8; 
  __int64 v10; 
  LUIGridAxisData *v14; 
  double v17; 
  unsigned int flags; 
  __int64 v19; 
  __int128 v20; 
  __int128 v22; 
  unsigned int v25; 
  __int64 v27; 
  double v28; 
  __int128 v30; 
  float numLines; 
  LUIElementAxisPosition v34; 
  __int128 v35; 
  __int128 v36; 
  __int128 v37; 

  v10 = 16i64;
  if ( axis )
    v10 = 1344i64;
  v14 = (LUIGridAxisData *)((char *)gridData + v10);
  _XMM6 = *(_OWORD *)&targetPosition;
  if ( v14->numLines >= 0 )
  {
    v37 = v7;
    v36 = v8;
    v35 = _XMM9;
    if ( clamp )
    {
      if ( axis )
      {
        _XMM0 = *(_OWORD *)grid->currentAnimationState.position.y.offsets;
        v17 = *(double *)grid->currentAnimationState.position.y.anchors;
      }
      else
      {
        _XMM0 = *(_OWORD *)grid->currentAnimationState.position.x.offsets;
        v17 = *(double *)grid->currentAnimationState.position.x.anchors;
      }
      *(_OWORD *)v34.offsets = _XMM0;
      *(double *)v34.anchors = v17;
      *(float *)&_XMM0 = LUI_Measure(&v34);
      if ( v14->alignment )
      {
        if ( v14->alignment == CENTER )
        {
          v22 = 0i64;
          *(float *)&v22 = (float)v14->numLines - 0.5;
          _XMM2 = v22;
          __asm
          {
            vmaxss  xmm0, xmm6, cs:__real@3f000000
            vminss  xmm6, xmm2, xmm0
          }
        }
        else if ( v14->alignment == BOTTOM )
        {
          flags = grid->currentAnimationState.flags;
          if ( (flags & 2) == 0 || gridData->pendingDimensionUpdate || (flags & 1) == 0 )
            goto LABEL_20;
          v19 = 28i64;
          if ( axis )
            v19 = 1356i64;
          if ( *(int *)((char *)&gridData->buildChildFunction + v19) >= 0 )
          {
            *(float *)&_XMM0 = LUIElement_Grid_ConvertPixelDistanceToLines(grid, gridData, axis, 0.0, *(float *)&_XMM0, luaVM);
          }
          else
          {
LABEL_20:
            v20 = 0i64;
            *(float *)&v20 = (float)v14->maxVisibleLines;
            _XMM0 = v20;
          }
          __asm
          {
            vmaxss  xmm1, xmm0, xmm6
            vminss  xmm6, xmm1, xmm0
          }
        }
        else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 1206, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected alignment") )
        {
          __debugbreak();
        }
      }
      else
      {
        v25 = grid->currentAnimationState.flags;
        __asm { vmaxss  xmm6, xmm6, xmm8 }
        if ( (v25 & 2) == 0 || gridData->pendingDimensionUpdate || (v25 & 1) == 0 )
          goto LABEL_30;
        v27 = 28i64;
        if ( axis )
          v27 = 1356i64;
        if ( *(int *)((char *)&gridData->buildChildFunction + v27) >= 0 )
        {
          _XMM0 = _XMM0 ^ _xmm;
          HIDWORD(v28) = 0;
          *(float *)&v28 = (float)v14->numLines;
          *(float *)&_XMM0 = LUIElement_Grid_ConvertPixelDistanceToLines(grid, gridData, axis, v28, *(float *)&_XMM0, luaVM);
        }
        else
        {
LABEL_30:
          v30 = 0i64;
          *(float *)&v30 = (float)(v14->numLines - v14->maxVisibleLines);
          _XMM0 = v30;
        }
        __asm { vminss  xmm6, xmm0, xmm6 }
      }
    }
    numLines = (float)v14->numLines;
    __asm { vxorpd  xmm9, xmm9, xmm9 }
    if ( numLines < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(double *)&_XMM9, numLines) )
      __debugbreak();
    __asm
    {
      vmaxss  xmm0, xmm6, xmm8
      vminss  xmm6, xmm0, xmm7
    }
    if ( (*(float *)&_XMM6 < 0.0 || *(float *)&_XMM6 > (float)v14->numLines) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 1211, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( targetPosition ) && ( targetPosition ) <= ( axisData->numLines )", "targetPosition not in [0.f, axisData->numLines]\n\t%g not in [%g, %g]", *(float *)&_XMM6, *(double *)&_XMM9, (float)v14->numLines) )
      __debugbreak();
  }
  v14->targetPosition = *(float *)&_XMM6;
  if ( snap )
  {
    v14->velocity = 0.0;
    v14->currentPosition = *(float *)&_XMM6;
    LUIElement_Grid_ShuffleLines(gridData, v14);
  }
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
  int firstVisibleLine; 
  signed int v5; 
  signed int v6; 
  int v7; 
  signed int i; 
  int outFirstElementIndex; 
  int outLastElementIndex; 

  if ( gridData->numChildren )
  {
    LUIElement_Grid_ComputeAxisBoundaries(gridData, axisData, axisData->currentPosition, &outFirstElementIndex, &outLastElementIndex);
    if ( gridData->buildChildFunction == -2 )
    {
      axisData->firstVisibleLine = outFirstElementIndex;
      axisData->lastVisibleLine = outLastElementIndex;
    }
    else
    {
      firstVisibleLine = axisData->firstVisibleLine;
      v5 = 0;
      v6 = 0;
      v7 = outFirstElementIndex;
      for ( i = abs32(firstVisibleLine - outFirstElementIndex); firstVisibleLine < v7; ++v6 )
      {
        if ( v6 >= i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 670, ASSERT_TYPE_ASSERT, "(numIterations < maxIterations)", (const char *)&queryFormat, "numIterations < maxIterations") )
          __debugbreak();
        LUIElement_Grid_MoveLineFromStartToEnd(gridData, axisData);
        firstVisibleLine = axisData->firstVisibleLine;
      }
      for ( ; firstVisibleLine > v7; ++v5 )
      {
        if ( v5 >= i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 684, ASSERT_TYPE_ASSERT, "(numIterations < maxIterations)", (const char *)&queryFormat, "numIterations < maxIterations") )
          __debugbreak();
        LUIElement_Grid_MoveLineFromEndToStart(gridData, axisData);
        firstVisibleLine = axisData->firstVisibleLine;
      }
      if ( firstVisibleLine != v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 693, ASSERT_TYPE_ASSERT, "(axisData->firstVisibleLine == start)", (const char *)&queryFormat, "axisData->firstVisibleLine == start") )
        __debugbreak();
      axisData->lastVisibleLine = outLastElementIndex;
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
  LUIElement *firstChild; 
  __int64 v7; 
  __int64 v8; 
  LUIGridAxisData *v10; 
  int firstVisibleLine; 
  LUIGridAxisData *v13; 
  int v14; 
  bool v16; 
  double v19; 
  long double v20; 
  __int64 v21; 
  __int64 v22; 
  LUIGridAxis primaryAxis; 
  int v24; 
  int v25; 
  int lastVisibleLine; 
  int v27; 
  LUIGridAxisData *v28; 
  int v30; 

  firstChild = element->firstChild;
  v7 = 16i64;
  v8 = 16i64;
  if ( gridData->primaryAxis )
    v7 = 1344i64;
  v10 = (LUIGridAxisData *)((char *)gridData + v7);
  if ( gridData->secondaryAxis )
    v8 = 1344i64;
  firstVisibleLine = v10->firstVisibleLine;
  v13 = (LUIGridAxisData *)((char *)gridData + v8);
  v28 = v13;
  v14 = v13->firstVisibleLine;
  if ( firstChild )
  {
    while ( 1 )
    {
      v27 = v14;
      v30 = firstVisibleLine;
      if ( !LUI_ElementHasWeakTableEntry(firstChild, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 2792, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( child, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( child, luaVM )") )
        __debugbreak();
      LUIElement_Grid_ComputeTransitionStep(v10, firstVisibleLine);
      *(double *)&_XMM0 = LUIElement_Grid_ComputeTransitionStep(v13, v14);
      __asm { vminss  xmm6, xmm0, xmm6 }
      v16 = 1;
      if ( !LUI_ElementHasWeakTableEntry(firstChild, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 2431, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( child, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( child, luaVM )") )
        __debugbreak();
      LUI_PutElementOnTopOfStack(firstChild, luaVM);
      j_lua_getfield(luaVM, -1, "_gridTransitionStep");
      if ( j_lua_isnumber(luaVM, -1) )
      {
        _XMM1 = 0i64;
        __asm { vroundss xmm1, xmm1, xmm6, 1 }
        if ( *(float *)&_XMM6 == *(float *)&_XMM1 )
        {
          *((_QWORD *)&_XMM0 + 1) = 0i64;
          v16 = (float)lui_tointeger32(luaVM, -1) != *(float *)&_XMM6;
        }
        else
        {
          v19 = lui_tonumber32(luaVM, -1);
          v16 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v19 - *(float *)&_XMM6) & _xmm) > 0.0099999998;
        }
      }
      j_lua_settop(luaVM, -3);
      if ( v16 )
      {
        v20 = *(float *)&_XMM6;
        if ( LUI_BeginEventWithElement(localClientNum, firstChild, "grid_anim", luaVM) )
        {
          LUI_SetTableNumber((const char *)&stru_143CE7590, v20, luaVM);
          LUI_EndEventWithElement(luaVM);
        }
        LUI_PutElementOnTopOfStack(firstChild, luaVM);
        j_lua_pushnumber(luaVM, v20);
        j_lua_setfield(luaVM, -2, "_gridTransitionStep");
        j_lua_settop(luaVM, -2);
      }
      if ( gridData->pendingNotify )
      {
        v21 = 16i64;
        if ( gridData->primaryAxis )
          v21 = 1344i64;
        if ( *(int *)((char *)&gridData->buildChildFunction + v21) == firstVisibleLine )
        {
          v22 = 16i64;
          if ( gridData->secondaryAxis )
            v22 = 1344i64;
          if ( *(int *)((char *)&gridData->buildChildFunction + v22) == v14 )
          {
            gridData->pendingNotify = 0;
            if ( LUI_BeginEventWithElement(localClientNum, element, "position_visible", luaVM) )
            {
              primaryAxis = gridData->primaryAxis;
              v24 = v14;
              if ( primaryAxis )
                v24 = firstVisibleLine;
              LUI_SetTableNumber("row", (float)v24, luaVM);
              v25 = firstVisibleLine;
              _XMM0 = 0i64;
              if ( primaryAxis )
                v25 = v14;
              LUI_SetTableNumber("column", (float)v25, luaVM);
              LUI_SetTableElement("child", firstChild, luaVM);
              LUI_EndEventWithElement(luaVM);
            }
          }
        }
      }
      firstChild = firstChild->nextSibling;
      if ( !firstChild )
        break;
      lastVisibleLine = v10->lastVisibleLine;
      if ( firstVisibleLine == lastVisibleLine )
      {
        firstVisibleLine = v10->firstVisibleLine;
        ++v14;
        v13 = v28;
        if ( v30 != lastVisibleLine )
          v14 = v27;
      }
      else
      {
        v13 = v28;
        ++firstVisibleLine;
        ++v14;
        if ( v30 != lastVisibleLine )
          v14 = v27;
      }
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
__int64 LUI_LuaCall_LUIElement_SetupUIGrid_impl(lua_State *const luaVM)
{
  LUIElement *v3; 
  int *v4; 
  int v5; 
  int v6; 
  int v7; 
  bool v8; 
  double v9; 
  unsigned __int8 v14; 
  char v15; 
  int v18; 
  int v19; 
  int v20; 
  bool v21; 
  char v22; 
  char v23; 
  int v24; 
  int *v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int *v30; 
  int v31; 
  int v32; 
  int v33; 
  bool v34; 
  double v35; 
  double v36; 
  double v37; 
  double v38; 
  double v39; 
  __int64 v40; 
  int *v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  char *v47; 
  unsigned __int64 v48; 
  __int64 v49; 
  unsigned __int64 v50; 
  _QWORD *v51; 
  _DWORD *v52; 
  bool v53; 
  int v54; 
  int *v55; 
  ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > **v56; 
  ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > > *v57; 
  ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > *v58; 
  char *v59; 
  unsigned __int64 v60; 
  ntl::internal::list_node<LUIElement *> **p_m_freelist; 
  unsigned __int64 m_size; 
  ntl::internal::list_node<LUIElement *> *m_buffer; 
  ntl::internal::pool_allocator_freelist<24> *v64; 
  ntl::internal::pool_allocator_freelist<24> *v65; 
  int *v66; 
  int i; 
  int v68; 
  LUIElement *v69; 
  ntl::internal::list_node<LUIElement *> *v70; 
  __int64 v72; 
  char *v73; 
  int *v74; 
  __int64 v75; 
  ntl::internal::buffer_memory_block<ntl::internal::list_node<LUIElement *> > v76; 
  ntl::internal::buffer_memory_block<ntl::internal::list_node<LUIElement *> > v77; 
  int v78; 
  int v79; 
  int *v80; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v3 = LUI_ToElement(luaVM, 1);
  v3->layoutFunction = LUIElement_Grid_Layout;
  LUI_LUIElement_RegisterMethods(v3, luaVM, s_gridMethods);
  if ( !LUI_ElementHasWeakTableEntry(v3, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v3, luaVM);
  v4 = (int *)j_lua_newuserdata(luaVM, 0xAF8ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v3->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v3->customElementData = v4;
  memset_0(v4, 0, 0xAF8ui64);
  LUICache<int,float,20,ntl::hash<int>>::LUICache<int,float,20,ntl::hash<int>>((LUICache<int,float,20,ntl::hash<int> > *)(v4 + 16));
  LUICache<int,float,20,ntl::hash<int>>::LUICache<int,float,20,ntl::hash<int>>((LUICache<int,float,20,ntl::hash<int> > *)(v4 + 348));
  j_lua_pushlstring(luaVM, "_gridFunctionRefs", 0x11ui64);
  j_lua_createtable(luaVM, 0, 2);
  j_lua_settable(luaVM, 1);
  j_lua_getfield(luaVM, 1, "_gridFunctionRefs");
  j_lua_getfield(luaVM, 2, "buildChild");
  if ( j_lua_type(luaVM, -1) == 6 )
  {
    *v4 = j_luaL_ref(luaVM, -2);
  }
  else
  {
    *v4 = -2;
    j_lua_settop(luaVM, -2);
  }
  j_lua_settop(luaVM, -2);
  v5 = *v4;
  v79 = *v4;
  j_lua_getfield(luaVM, 1, "_gridFunctionRefs");
  j_lua_getfield(luaVM, 2, "refreshChild");
  if ( j_lua_type(luaVM, -1) == 6 )
  {
    v4[1] = j_luaL_ref(luaVM, -2);
  }
  else
  {
    v4[1] = -2;
    j_lua_settop(luaVM, -2);
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 1, "_gridFunctionRefs");
  j_lua_getfield(luaVM, 2, "measureRow");
  if ( j_lua_type(luaVM, -1) == 6 )
    v4[666] = j_luaL_ref(luaVM, -2);
  else
    j_lua_settop(luaVM, -2);
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 1, "_gridFunctionRefs");
  j_lua_getfield(luaVM, 2, "measureColumn");
  if ( j_lua_type(luaVM, -1) == 6 )
    v4[334] = j_luaL_ref(luaVM, -2);
  else
    j_lua_settop(luaVM, -2);
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "maxVisibleRows");
  if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 3196, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
    __debugbreak();
  v6 = lui_tointeger32(luaVM, -1);
  if ( v6 < 0 )
    v6 = 0;
  v4[340] = v6;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "maxVisibleColumns");
  if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 3201, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
    __debugbreak();
  v7 = lui_tointeger32(luaVM, -1);
  if ( v7 < 0 )
    v7 = 0;
  v4[8] = v7;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "adjustSizeToContent");
  if ( j_lua_type(luaVM, -1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 3206, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (-1)) == 1))", (const char *)&queryFormat, "lua_isboolean( luaVM, -1 )") )
    __debugbreak();
  *((_BYTE *)v4 + 2688) = j_lua_toboolean(luaVM, -1) != 0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "forcePrimaryAxisScrolling");
  v8 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) != 0;
  *((_BYTE *)v4 + 2691) = v8;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "spacingX");
  if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 3222, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
    __debugbreak();
  *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
  v9 = 0.0;
  __asm { vmaxss  xmm0, xmm0, xmm6 }
  v4[5] = _XMM0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "spacingY");
  if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 3227, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
    __debugbreak();
  *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
  __asm { vmaxss  xmm0, xmm0, xmm6 }
  v4[337] = _XMM0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "maxVelocity");
  if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 3232, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
    __debugbreak();
  *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
  __asm { vmaxss  xmm0, xmm0, xmm6 }
  v4[3] = _XMM0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "springCoefficient");
  if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 3237, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
    __debugbreak();
  *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
  __asm { vmaxss  xmm0, xmm0, xmm6 }
  v4[2] = _XMM0;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "primaryAxis");
  if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 3242, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
    __debugbreak();
  v14 = lui_tointeger32(luaVM, -1);
  *((_BYTE *)v4 + 2672) = v14;
  if ( v14 > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 3244, ASSERT_TYPE_ASSERT, "(gridData->primaryAxis == LUIGridAxis::HORIZONTAL || gridData->primaryAxis == LUIGridAxis::VERTICAL)", (const char *)&queryFormat, "gridData->primaryAxis == LUIGridAxis::HORIZONTAL || gridData->primaryAxis == LUIGridAxis::VERTICAL") )
    __debugbreak();
  j_lua_settop(luaVM, -2);
  v15 = *((_BYTE *)v4 + 2672);
  *((_BYTE *)v4 + 2673) = v15 == 0;
  j_lua_getfield(luaVM, 2, "columnWidth");
  *(float *)&_XMM7 = FLOAT_N1_0;
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm1, xmm0, xmm6 }
  }
  else
  {
    *(float *)&_XMM1 = FLOAT_N1_0;
  }
  v4[15] = _XMM1;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "rowHeight");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm7, xmm0, xmm6 }
  }
  v4[347] = _XMM7;
  j_lua_settop(luaVM, -2);
  if ( v5 == -2 )
  {
    v4[669] = 0;
  }
  else
  {
    j_lua_getfield(luaVM, 2, "numChildren");
    if ( j_lua_isnumber(luaVM, -1) )
    {
      v18 = lui_tointeger32(luaVM, -1);
      if ( v18 < 0 )
        v18 = 0;
    }
    else
    {
      v18 = -1;
    }
    v4[669] = v18;
    j_lua_settop(luaVM, -2);
  }
  j_lua_getfield(luaVM, 2, "numRows");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v19 = lui_tointeger32(luaVM, -1);
    if ( v19 < 0 )
      v19 = 0;
  }
  else
  {
    v19 = -1;
  }
  v4[338] = v19;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "numColumns");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v20 = lui_tointeger32(luaVM, -1);
    if ( v20 < 0 )
      v20 = 0;
  }
  else
  {
    v20 = -1;
  }
  v4[6] = v20;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "ensureClampedTargetLineOnDimensionsUpdate");
  v21 = j_lua_type(luaVM, -1) != 1 || j_lua_toboolean(luaVM, -1) != 0;
  *((_BYTE *)v4 + 2693) = v21;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "horizontalAlignment");
  if ( j_lua_isnumber(luaVM, -1) && (v22 = lui_tointeger32(luaVM, -1)) != 0 )
  {
    if ( v22 == 1 )
    {
      *((_BYTE *)v4 + 1340) = 1;
    }
    else if ( v22 == 2 )
    {
      *((_BYTE *)v4 + 1340) = 2;
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 3339, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected horizontal alignment value") )
    {
      __debugbreak();
    }
  }
  else
  {
    *((_BYTE *)v4 + 1340) = 0;
  }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "verticalAlignment");
  if ( j_lua_isnumber(luaVM, -1) && (v23 = lui_tointeger32(luaVM, -1)) != 0 )
  {
    if ( v23 == 1 )
    {
      *((_BYTE *)v4 + 2668) = 1;
    }
    else if ( v23 == 2 )
    {
      *((_BYTE *)v4 + 2668) = 2;
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 3363, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected vertical alignment value") )
    {
      __debugbreak();
    }
  }
  else
  {
    *((_BYTE *)v4 + 2668) = 0;
  }
  j_lua_settop(luaVM, -2);
  v24 = v4[8];
  v25 = v4 + 9;
  if ( v5 == -2 )
  {
    v26 = v4[6];
    if ( v24 > v26 )
      v26 = v4[8];
    *v25 = v26;
    j_lua_getfield(luaVM, 2, "maxColumns");
    if ( j_lua_isnumber(luaVM, -1) )
    {
      v27 = *v25;
      v28 = lui_tointeger32(luaVM, -1);
      if ( v28 > v27 )
        v27 = v28;
      *v25 = v27;
    }
    j_lua_settop(luaVM, -2);
    v29 = v4[338];
    v30 = v4 + 341;
    if ( v4[340] > v29 )
      v29 = v4[340];
    *v30 = v29;
    j_lua_getfield(luaVM, 2, "maxRows");
    if ( j_lua_isnumber(luaVM, -1) )
    {
      v31 = *v30;
      v32 = lui_tointeger32(luaVM, -1);
      if ( v32 > v31 )
        v31 = v32;
      *v30 = v31;
    }
    j_lua_settop(luaVM, -2);
  }
  else
  {
    v30 = v4 + 341;
    v33 = v4[340];
    if ( *((_BYTE *)v4 + 2691) )
    {
      v34 = *((_BYTE *)v4 + 2672) == 0;
      *v25 = v24;
      *v30 = v33;
      if ( v34 )
      {
        *v25 = v24 + 1;
        goto LABEL_122;
      }
    }
    else
    {
      *v25 = v24 + 1;
    }
    *v30 = v33 + 1;
  }
LABEL_122:
  LUIElement_Grid_SetDimensions(v3, (LUIGridData *)v4, luaVM);
  if ( *((_BYTE *)v4 + 1340) )
  {
    if ( *((_BYTE *)v4 + 1340) == 1 )
    {
      HIDWORD(v37) = 0;
      *(float *)&v37 = (float)v4[8] * 0.5;
      v35 = v37;
    }
    else
    {
      v35 = 0.0;
      if ( *((_BYTE *)v4 + 1340) == 2 )
      {
        HIDWORD(v36) = 0;
        *(float *)&v36 = (float)v4[8];
        v35 = v36;
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 1241, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected alignment") )
      {
        __debugbreak();
      }
    }
  }
  else
  {
    v35 = 0.0;
  }
  LUIElement_Grid_SetTargetPosition(v3, (LUIGridData *)v4, HORIZONTAL, v35, 1, 1, luaVM);
  if ( *((_BYTE *)v4 + 2668) )
  {
    if ( *((_BYTE *)v4 + 2668) == 1 )
    {
      HIDWORD(v39) = 0;
      *(float *)&v39 = (float)v4[340] * 0.5;
      v9 = v39;
    }
    else if ( *((_BYTE *)v4 + 2668) == 2 )
    {
      HIDWORD(v38) = 0;
      *(float *)&v38 = (float)v4[340];
      v9 = v38;
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 1241, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected alignment") )
    {
      __debugbreak();
    }
  }
  LUIElement_Grid_SetTargetPosition(v3, (LUIGridData *)v4, VERTICAL, v9, 1, 1, luaVM);
  v40 = 9i64;
  if ( v15 )
    v40 = 341i64;
  v41 = &v4[v40];
  v80 = v41;
  v42 = *v41;
  v75 = 24 * v42;
  if ( !v15 )
    v25 = v30;
  v74 = v25;
  v43 = *v25;
  v44 = 24 * v42 * v43;
  v45 = 72 * v43;
  v72 = 72 * v43;
  v46 = 24 * v42 * v43;
  LUI_PutElementOnTopOfStack(v3, luaVM);
  v73 = (char *)j_lua_newuserdata(luaVM, v45 + v46 + v44);
  j_lua_setfield(luaVM, -2, "_gridContentBuffer");
  j_lua_settop(luaVM, -2);
  *((_QWORD *)v4 + 344) = 0i64;
  *((_QWORD *)v4 + 345) = 0i64;
  *((_QWORD *)v4 + 347) = 0i64;
  *((_QWORD *)v4 + 348) = 0i64;
  *((_QWORD *)v4 + 349) = v4 + 698;
  *((_QWORD *)v4 + 350) = v4 + 698;
  v47 = &v73[v44 + v72];
  if ( !v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 71, ASSERT_TYPE_ASSERT, "( p_buffer_start )", (const char *)&queryFormat, "p_buffer_start") )
    __debugbreak();
  *((_QWORD *)v4 + 347) = v47;
  *((_QWORD *)v4 + 348) = v46;
  ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>::reserve((ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> *)(v4 + 688), *v41 * *v74);
  *((_QWORD *)v4 + 337) = 0i64;
  *((_QWORD *)v4 + 338) = 0i64;
  *((_QWORD *)v4 + 340) = 0i64;
  *((_QWORD *)v4 + 341) = 0i64;
  *((_QWORD *)v4 + 342) = v4 + 684;
  *((_QWORD *)v4 + 343) = v4 + 684;
  if ( !v73 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 71, ASSERT_TYPE_ASSERT, "( p_buffer_start )", (const char *)&queryFormat, "p_buffer_start") )
    __debugbreak();
  *((_QWORD *)v4 + 341) = v72;
  *((_QWORD *)v4 + 340) = v73;
  v48 = *v74;
  if ( *((_QWORD *)v4 + 337) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 458, ASSERT_TYPE_ASSERT, "( base_type::m_data.begin() == 0 )", (const char *)&queryFormat, "base_type::m_data.begin() == NULL") )
    __debugbreak();
  if ( 72 * v48 > *((_QWORD *)v4 + 341) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 56, ASSERT_TYPE_ASSERT, "( size_bytes <= m_data.size_in_bytes() )", (const char *)&queryFormat, "size_bytes <= m_data.size_in_bytes()") )
    __debugbreak();
  v76.m_buffer = (ntl::internal::list_node<LUIElement *> *)*((_QWORD *)v4 + 340);
  v76.m_size = v48;
  *(ntl::internal::buffer_memory_block<ntl::internal::list_node<LUIElement *> > *)(v4 + 674) = v76;
  v49 = *((_QWORD *)v4 + 338);
  v50 = *((_QWORD *)v4 + 337);
  if ( !v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 52, ASSERT_TYPE_ASSERT, "( num_elements > 0 )", (const char *)&queryFormat, "num_elements > 0") )
    __debugbreak();
  v51 = (_QWORD *)(v50 + 72 * v49);
  v52 = v4 + 678;
  do
  {
    v51 -= 9;
    *v51 = v52;
    v52 = v51;
  }
  while ( (unsigned __int64)v51 > v50 );
  *((_QWORD *)v4 + 339) = v51;
  if ( !v51 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  v53 = v4[340] <= 0;
  v4[671] = -1;
  if ( !v53 && v4[8] > 0 )
  {
    v54 = 0;
    v4[671] = 0;
    v78 = 0;
    if ( *v74 > 0 )
    {
      v55 = v41;
      v56 = (ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > **)(v4 + 678);
      v57 = (ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > > *)(v4 + 684);
      do
      {
        if ( !*v56 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
          if ( !*v56 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
        }
        if ( *v56 == (ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > *)v56 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x48ui64, *((_QWORD *)v4 + 338)) )
          __debugbreak();
        v58 = *v56;
        *v56 = (ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > *)(*v56)->mp_prev;
        v58->mp_prev = NULL;
        v58->mp_next = NULL;
        v58->m_data.m_data.m_buffer = NULL;
        v58->m_data.m_data.m_size = 0i64;
        v58->m_data.m_data.m_buffer = NULL;
        v58->m_data.m_data.m_size = 0i64;
        v58->m_data.m_listHead.m_sentinel.mp_prev = &v58->m_data.m_listHead.m_sentinel;
        v58->m_data.m_listHead.m_sentinel.mp_next = &v58->m_data.m_listHead.m_sentinel;
        ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator>>>>::insert_before(v57, (ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > *)v57, v58);
        v58->m_data.m_data.m_buffer = NULL;
        v58->m_data.m_data.m_size = 0i64;
        v58->m_data.m_data.m_buffer = NULL;
        v58->m_data.m_data.m_size = 0i64;
        v58->m_data.m_listHead.m_sentinel.mp_prev = &v58->m_data.m_listHead.m_sentinel;
        v58->m_data.m_listHead.m_sentinel.mp_next = &v58->m_data.m_listHead.m_sentinel;
        v59 = &v73[v75 * v54 + v72];
        if ( !v59 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 71, ASSERT_TYPE_ASSERT, "( p_buffer_start )", (const char *)&queryFormat, "p_buffer_start") )
          __debugbreak();
        v58->m_data.m_data.m_buffer = v59;
        v58->m_data.m_data.m_size = v75;
        v60 = *v55;
        if ( v58->m_data.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 458, ASSERT_TYPE_ASSERT, "( base_type::m_data.begin() == 0 )", (const char *)&queryFormat, "base_type::m_data.begin() == NULL") )
          __debugbreak();
        if ( 24 * v60 > v58->m_data.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 56, ASSERT_TYPE_ASSERT, "( size_bytes <= m_data.size_in_bytes() )", (const char *)&queryFormat, "size_bytes <= m_data.size_in_bytes()") )
          __debugbreak();
        p_m_freelist = (ntl::internal::list_node<LUIElement *> **)&v58->m_data.m_freelist;
        v77.m_size = v60;
        v77.m_buffer = (ntl::internal::list_node<LUIElement *> *)v58->m_data.m_data.m_buffer;
        v58->m_data.m_data = v77;
        m_size = v58->m_data.m_data.m_size;
        m_buffer = v58->m_data.m_data.m_buffer;
        if ( !m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 52, ASSERT_TYPE_ASSERT, "( num_elements > 0 )", (const char *)&queryFormat, "num_elements > 0") )
          __debugbreak();
        v64 = &v58->m_data.m_freelist;
        v65 = (ntl::internal::pool_allocator_freelist<24> *)&m_buffer[m_size];
        do
        {
          v65 -= 3;
          v65->m_head.mp_next = &v64->m_head;
          v64 = v65;
        }
        while ( v65 > (ntl::internal::pool_allocator_freelist<24> *)m_buffer );
        *p_m_freelist = (ntl::internal::list_node<LUIElement *> *)v65;
        if ( !v65 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( v79 != -2 )
        {
          v66 = v80;
          for ( i = 0; i < *v80; ++v4[671] )
          {
            if ( *v4 == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 431, ASSERT_TYPE_ASSERT, "(!LUIElement_Grid_UserSuppliesChildren( gridData ))", (const char *)&queryFormat, "!LUIElement_Grid_UserSuppliesChildren( gridData )") )
              __debugbreak();
            if ( !LUI_ElementHasWeakTableEntry(v3, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_grid.cpp", 432, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( grid, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( grid, luaVM )") )
              __debugbreak();
            LUI_PutElementOnTopOfStack(v3, luaVM);
            j_lua_getfield(luaVM, -1, "_gridFunctionRefs");
            j_lua_rawgeti(luaVM, -1, *v4);
            j_lua_remove(luaVM, -2);
            j_lua_remove(luaVM, -2);
            v68 = LuaShared_PCall(luaVM, 0, 1);
            if ( v68 )
            {
              LUI_ReportError("Error while creating UI grid content.\n", luaVM);
              LUI_HandleLuaError(v68);
              v69 = NULL;
            }
            else
            {
              if ( !j_lua_isuserdata(luaVM, -1) )
                j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, -1 )");
              v69 = LUI_ToElement(luaVM, -1);
              j_lua_settop(luaVM, -2);
              v69->priority = 0;
              v69->parent = v3;
              LUI_LUIElement_AddStrongReference(v3, v69, luaVM);
            }
            if ( !*p_m_freelist )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
                __debugbreak();
              if ( !*p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
                __debugbreak();
            }
            if ( *p_m_freelist == (ntl::internal::list_node<LUIElement *> *)p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, v58->m_data.m_data.m_size) )
              __debugbreak();
            v70 = *p_m_freelist;
            *p_m_freelist = (ntl::internal::list_node<LUIElement *> *)(*p_m_freelist)->mp_prev;
            v70->mp_prev = NULL;
            v70->mp_next = NULL;
            v70->m_data = v69;
            ntl::internal::list_head_base<ntl::internal::list_node<LUIElement *>>::insert_before(&v58->m_data.m_listHead, (ntl::internal::list_node<LUIElement *> *)&v58->m_data.m_listHead, v70);
            v66 = v80;
            ++i;
          }
          v55 = v66;
        }
        v56 = (ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > **)(v4 + 678);
        v57 = (ntl::internal::list_head_base<ntl::internal::list_node<ntl::list<LUIElement *,ntl::pool_allocator<ntl::internal::list_node<LUIElement *>,ntl::solitary_buffer_allocator> > > > *)(v4 + 684);
        v54 = v78 + 1;
        v78 = v54;
      }
      while ( v54 < *v74 );
    }
  }
  LUIElement_Grid_ShuffleLines((LUIGridData *)v4, (LUIGridAxisData *)(v4 + 4));
  LUIElement_Grid_ShuffleLines((LUIGridData *)v4, (LUIGridAxisData *)(v4 + 336));
  LUIElement_Grid_PopulateChildren(v3, (LUIGridData *)v4, luaVM);
  return 0i64;
}

