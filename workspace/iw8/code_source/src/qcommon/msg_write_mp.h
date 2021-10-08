/*
==============
SnapshotInfo::reset
==============
*/

void __fastcall SnapshotInfo::reset(SnapshotInfo *this)
{
  ?reset@SnapshotInfo@@QEAAXXZ(this);
}

/*
==============
SnapshotInfo::reset
==============
*/
void SnapshotInfo::reset(SnapshotInfo *this)
{
  this->client = NULL;
  this->clientNum = 0;
  *(_OWORD *)this->mapCenter.v = 0ui64;
  *(_QWORD *)&this->snapshotDeltaTime = 0i64;
  *(_WORD *)&this->entJustUnlinked = 0;
  this->highPrecisionOrigin = 0;
  this->predictedResult = NULL;
  this->fieldChanges = NULL;
  this->packetEntityType = ANALYZE_DATATYPE_ENTITYTYPE_FIRST;
  *(_QWORD *)&this->snapMeasurementIndex = -1i64;
  this->sendNetfieldLoDBit = 0;
  *(_QWORD *)this->oldEntitiesLoD.array = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[2] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[4] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[6] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[8] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[10] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[12] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[14] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[16] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[18] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[20] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[22] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[24] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[26] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[28] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[30] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[32] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[34] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[36] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[38] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[40] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[42] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[44] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[46] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[48] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[50] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[52] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[54] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[56] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[58] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[60] = 0i64;
  *(_QWORD *)&this->oldEntitiesLoD.array[62] = 0i64;
  *(_QWORD *)this->newEntitiesLoD.array = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[2] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[4] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[6] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[8] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[10] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[12] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[14] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[16] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[18] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[20] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[22] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[24] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[26] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[28] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[30] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[32] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[34] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[36] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[38] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[40] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[42] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[44] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[46] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[48] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[50] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[52] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[54] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[56] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[58] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[60] = 0i64;
  *(_QWORD *)&this->newEntitiesLoD.array[62] = 0i64;
}

