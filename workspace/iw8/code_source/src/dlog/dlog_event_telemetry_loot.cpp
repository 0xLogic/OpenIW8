/*
==============
DlogEvent_Loot_ItemDismantle::SetItemData
==============
*/

void __fastcall DlogEvent_Loot_ItemDismantle::SetItemData(DlogEvent_Loot_ItemDismantle *this, const unsigned int itemID, const unsigned int itemQuantity)
{
  ?SetItemData@DlogEvent_Loot_ItemDismantle@@QEAAXII@Z(this, itemID, itemQuantity);
}

/*
==============
DLogEvent_Loot::WriteCurrencyData
==============
*/

bool __fastcall DLogEvent_Loot::WriteCurrencyData(DLogEvent_Loot *this, DLogContext *context)
{
  return ?WriteCurrencyData@DLogEvent_Loot@@IEAA_NPEAUDLogContext@@@Z(this, context);
}

/*
==============
DlogEvent_Loot_ItemCraft::SetItemData
==============
*/

void __fastcall DlogEvent_Loot_ItemCraft::SetItemData(DlogEvent_Loot_ItemCraft *this, const unsigned int itemID, const unsigned int itemQuantity)
{
  ?SetItemData@DlogEvent_Loot_ItemCraft@@QEAAXII@Z(this, itemID, itemQuantity);
}

/*
==============
DlogEvent_Loot_ItemDismantle::WriteEvent
==============
*/

bool __fastcall DlogEvent_Loot_ItemDismantle::WriteEvent(DlogEvent_Loot_ItemDismantle *this, DLogContext *context)
{
  return ?WriteEvent@DlogEvent_Loot_ItemDismantle@@EEAA_NPEAUDLogContext@@@Z(this, context);
}

/*
==============
DlogEvent_Loot_ItemCraft::WriteEvent
==============
*/

bool __fastcall DlogEvent_Loot_ItemCraft::WriteEvent(DlogEvent_Loot_ItemCraft *this, DLogContext *context)
{
  return ?WriteEvent@DlogEvent_Loot_ItemCraft@@EEAA_NPEAUDLogContext@@@Z(this, context);
}

/*
==============
DlogEvent_Loot_RedeemDrop::SetItemData
==============
*/

void __fastcall DlogEvent_Loot_RedeemDrop::SetItemData(DlogEvent_Loot_RedeemDrop *this, const unsigned int *itemIDs, const unsigned __int8 numItems)
{
  ?SetItemData@DlogEvent_Loot_RedeemDrop@@QEAAXPEBIE@Z(this, itemIDs, numItems);
}

/*
==============
DlogEvent_Loot_RedeemDrop::WriteEvent
==============
*/

bool __fastcall DlogEvent_Loot_RedeemDrop::WriteEvent(DlogEvent_Loot_RedeemDrop *this, DLogContext *context)
{
  return ?WriteEvent@DlogEvent_Loot_RedeemDrop@@EEAA_NPEAUDLogContext@@@Z(this, context);
}

/*
==============
DlogEvent_Loot_ItemCraft::SetItemData
==============
*/
void DlogEvent_Loot_ItemCraft::SetItemData(DlogEvent_Loot_ItemCraft *this, const unsigned int itemID, const unsigned int itemQuantity)
{
  this->item_id = itemID;
  this->quantity = itemQuantity;
}

/*
==============
DlogEvent_Loot_ItemDismantle::SetItemData
==============
*/
void DlogEvent_Loot_ItemDismantle::SetItemData(DlogEvent_Loot_ItemDismantle *this, const unsigned int itemID, const unsigned int itemQuantity)
{
  this->item_id = itemID;
  this->quantity = itemQuantity;
}

/*
==============
DlogEvent_Loot_RedeemDrop::SetItemData
==============
*/
void DlogEvent_Loot_RedeemDrop::SetItemData(DlogEvent_Loot_RedeemDrop *this, const unsigned int *itemIDs, const unsigned __int8 numItems)
{
  this->num_items = numItems;
  memcpy_0(this->item_ids, itemIDs, 4i64 * numItems);
}

/*
==============
DLogEvent_Loot::WriteCurrencyData
==============
*/
bool DLogEvent_Loot::WriteCurrencyData(DLogEvent_Loot *this, DLogContext *context)
{
  Online_Commerce *Instance; 
  int ControllerIndex; 
  __int64 CurrencyAmount; 
  Online_Commerce *v7; 
  int v8; 
  __int64 v9; 
  Online_Commerce *v10; 
  int v11; 
  __int64 v12; 

  Instance = Online_Commerce::GetInstance();
  ControllerIndex = DLogEvent_Base::GetControllerIndex(this);
  CurrencyAmount = Online_Commerce::GetCurrencyAmount(Instance, ControllerIndex, 20);
  v7 = Online_Commerce::GetInstance();
  v8 = DLogEvent_Base::GetControllerIndex(this);
  v9 = Online_Commerce::GetCurrencyAmount(v7, v8, 11);
  v10 = Online_Commerce::GetInstance();
  v11 = DLogEvent_Base::GetControllerIndex(this);
  v12 = Online_Commerce::GetCurrencyAmount(v10, v11, 12);
  if ( !DLog_IsActive() )
  {
    context->error = DLOG_ERROR_NOT_ACTIVE;
    return 0;
  }
  return DLog_BeginRow(context, "currency_header") && DLog_Int64(context, "balance_cod_points", CurrencyAmount) && DLog_Int64(context, "balance_keys", v9) && DLog_Int64(context, "balance_salvage", v12) && DLog_EndRow(context);
}

/*
==============
DlogEvent_Loot_ItemCraft::WriteEvent
==============
*/
bool DlogEvent_Loot_ItemCraft::WriteEvent(DlogEvent_Loot_ItemCraft *this, DLogContext *context)
{
  bool v5; 
  unsigned int quantity; 
  unsigned int item_id; 

  if ( !DLog_IsActive() )
    goto LABEL_2;
  v5 = DLog_BeginEvent(context, "dlog_event_item_craft");
  context->autoEndEvent = 1;
  if ( !v5 )
    return 0;
  quantity = this->quantity;
  item_id = this->item_id;
  if ( !DLog_IsActive() )
  {
LABEL_2:
    context->error = DLOG_ERROR_NOT_ACTIVE;
    return 0;
  }
  return DLog_BeginRow(context, "loot_item") && DLog_UInt32(context, "item_id", item_id) && DLog_UInt32(context, "quantity", quantity) && DLog_EndRow(context) && DLogEvent_Loot::WriteCurrencyData(this, context);
}

/*
==============
DlogEvent_Loot_ItemDismantle::WriteEvent
==============
*/
bool DlogEvent_Loot_ItemDismantle::WriteEvent(DlogEvent_Loot_ItemDismantle *this, DLogContext *context)
{
  bool v5; 
  unsigned int quantity; 
  unsigned int item_id; 

  if ( !DLog_IsActive() )
    goto LABEL_2;
  v5 = DLog_BeginEvent(context, "dlog_event_item_dismantle");
  context->autoEndEvent = 1;
  if ( !v5 )
    return 0;
  quantity = this->quantity;
  item_id = this->item_id;
  if ( !DLog_IsActive() )
  {
LABEL_2:
    context->error = DLOG_ERROR_NOT_ACTIVE;
    return 0;
  }
  return DLog_BeginRow(context, "loot_item") && DLog_UInt32(context, "item_id", item_id) && DLog_UInt32(context, "quantity", quantity) && DLog_EndRow(context) && DLogEvent_Loot::WriteCurrencyData(this, context);
}

/*
==============
DlogEvent_Loot_RedeemDrop::WriteEvent
==============
*/
bool DlogEvent_Loot_RedeemDrop::WriteEvent(DlogEvent_Loot_RedeemDrop *this, DLogContext *context)
{
  bool result; 
  int v5; 
  unsigned int *item_ids; 
  unsigned int v7; 
  bool v8; 

  if ( !DLog_IsActive() )
  {
    context->error = DLOG_ERROR_NOT_ACTIVE;
LABEL_3:
    result = 0;
    goto LABEL_4;
  }
  v8 = DLog_BeginEvent(context, "dlog_event_redeem_loot_drop");
  context->autoEndEvent = 1;
  if ( !v8 || !DLogEvent_Loot::WriteCurrencyData(this, context) )
    goto LABEL_3;
  result = 1;
LABEL_4:
  v5 = 0;
  if ( this->num_items )
  {
    item_ids = this->item_ids;
    do
    {
      if ( result )
      {
        v7 = *item_ids;
        if ( DLog_IsActive() )
        {
          if ( DLog_BeginRow(context, "loot_items") && DLog_UInt32(context, "item_id", v7) && DLog_UInt32(context, "quantity", 1u) && DLog_EndRow(context) )
          {
            result = 1;
            goto LABEL_10;
          }
        }
        else
        {
          context->error = DLOG_ERROR_NOT_ACTIVE;
        }
      }
      result = 0;
LABEL_10:
      ++v5;
      ++item_ids;
    }
    while ( v5 < this->num_items );
  }
  return result;
}

