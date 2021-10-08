/*
==============
hknpShapeCastFuncs::castShapeFunc<StaticModels_HavokShape>
==============
*/

void __fastcall hknpShapeCastFuncs::castShapeFunc<StaticModels_HavokShape>(hknpCollisionQueryContext *queryContext, const hknpShapeCastQuery *query, const hknpShapeQueryInfo *queryShapeInfo, const hknpShape *targetShape, const hknpQueryFilterData *targetShapeFilterData, const hknpShapeQueryInfo *targetShapeInfo, const hkTransformf *queryToTarget, bool queryAndTargetSwapped, hknpCollisionQueryCollector *collector, hknpCollisionQueryCollector *startCollector)
{
  ??$castShapeFunc@VStaticModels_HavokShape@@@hknpShapeCastFuncs@@YAXPEAUhknpCollisionQueryContext@@AEBUhknpShapeCastQuery@@AEBUhknpShapeQueryInfo@@PEBVhknpShape@@AEBUhknpQueryFilterData@@2AEBVhkTransformf@@_NPEAVhknpCollisionQueryCollector@@7@Z(queryContext, query, queryShapeInfo, targetShape, targetShapeFilterData, targetShapeInfo, queryToTarget, queryAndTargetSwapped, collector, startCollector);
}

/*
==============
hknpShapeCastFuncs::castShapeFunc<StaticModels_HavokShape>
==============
*/
void hknpShapeCastFuncs::castShapeFunc<StaticModels_HavokShape>(hknpCollisionQueryContext *queryContext, const hknpShapeCastQuery *query, const hknpShapeQueryInfo *queryShapeInfo, const hknpShape *targetShape, const hknpQueryFilterData *targetShapeFilterData, const hknpShapeQueryInfo *targetShapeInfo, const hkTransformf *queryToTarget, bool queryAndTargetSwapped, hknpCollisionQueryCollector *collector, hknpCollisionQueryCollector *startCollector)
{
  StaticModels_HavokShape::castShapeImpl(queryContext, query, queryShapeInfo, targetShape, targetShapeFilterData, targetShapeInfo, queryAndTargetSwapped, collector, startCollector);
}

