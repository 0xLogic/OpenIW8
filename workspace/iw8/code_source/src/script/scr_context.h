/*
==============
Profile_BeginScript
==============
*/

void __fastcall Profile_BeginScript(scrContext_t *scrContext, int profileIndex, int parentIndex, unsigned __int8 *depth, unsigned int fsID)
{
  ?Profile_BeginScript@@YAXAEAUscrContext_t@@HHPEAEI@Z(scrContext, profileIndex, parentIndex, depth, fsID);
}

/*
==============
GetProgramBufferOffset
==============
*/

unsigned int __fastcall GetProgramBufferOffset(const scrContext_t *scrContext, const char *codePos)
{
  return ?GetProgramBufferOffset@@YAIAEBUscrContext_t@@PEBD@Z(scrContext, codePos);
}

/*
==============
GetProgramBufferOffset
==============
*/
__int64 GetProgramBufferOffset(const scrContext_t *scrContext, const char *codePos)
{
  if ( codePos < scrContext->m_varPub.programBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 197, ASSERT_TYPE_ASSERT, "( codePos >= scrContext.m_varPub.programBuffer )", (const char *)&queryFormat, "codePos >= scrContext.m_varPub.programBuffer") )
    __debugbreak();
  if ( (unsigned __int64)(codePos - scrContext->m_varPub.programBuffer) > 0x7FFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 199, ASSERT_TYPE_ASSERT, "( ( codePos - scrContext.m_varPub.programBuffer ) <= MAX_SCRIPT_OFFSET )", (const char *)&queryFormat, "( codePos - scrContext.m_varPub.programBuffer ) <= MAX_SCRIPT_OFFSET") )
    __debugbreak();
  return (unsigned int)((_DWORD)codePos - LODWORD(scrContext->m_varPub.programBuffer));
}

/*
==============
Profile_BeginScript
==============
*/
void Profile_BeginScript(scrContext_t *scrContext, int profileIndex, int parentIndex, unsigned __int8 *depth, unsigned int fsID)
{
  __int64 v6; 
  unsigned __int64 v8; 
  ProfileScriptWritable *v9; 
  __int64 v10; 
  bitarray<128> *v11; 
  unsigned int v12; 
  __int64 v13; 
  bitarray<128> *v14; 
  int refCount; 
  unsigned __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 

  v6 = parentIndex;
  v8 = (unsigned int)profileIndex;
  if ( scrContext->m_profileScript.enabled )
  {
    if ( parentIndex != -1 && (unsigned int)parentIndex >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 253, ASSERT_TYPE_ASSERT, "(unsigned)( parentIndex ) < (unsigned)( 128 )", "parentIndex doesn't index PROF_SCRIPT_COUNT\n\t%i not in [0, %i)", parentIndex, 128) )
      __debugbreak();
    if ( (unsigned int)v8 >= 0x80 )
    {
      LODWORD(v18) = 128;
      LODWORD(v17) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 254, ASSERT_TYPE_ASSERT, "(unsigned)( profileIndex ) < (unsigned)( 128 )", "profileIndex doesn't index PROF_SCRIPT_COUNT\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    v9 = &scrContext->m_profileScript.write[(int)v8];
    if ( (unsigned int)(v6 + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "char __cdecl truncate_cast_impl<char,int>(int)", "signed", (char)v6, "signed", v6) )
      __debugbreak();
    scrContext->m_profileScript.parentIndex[(int)v8] = v6;
    if ( depth )
      scrContext->m_profileScript.depth[(int)v8] = *depth;
    v10 = fsID;
    v11 = &scrContext->m_profileScript.threadId[v10];
    if ( (unsigned int)v8 >= 0x80 )
    {
      LODWORD(v18) = 128;
      LODWORD(v17) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v17, v18) )
        __debugbreak();
    }
    v12 = 0x80000000 >> (v8 & 0x1F);
    v13 = v8 >> 5;
    if ( (v12 & v11->array[v13]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 264, ASSERT_TYPE_ASSERT, "( !scrContext.m_profileScript.threadId[fsID].testBit( profileIndex ) )", (const char *)&queryFormat, "!scrContext.m_profileScript.threadId[fsID].testBit( profileIndex )") )
      __debugbreak();
    if ( !fsID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 265, ASSERT_TYPE_ASSERT, "( fsID != NULL_OBJECT_VARIABLE_ID )", (const char *)&queryFormat, "fsID != NULL_OBJECT_VARIABLE_ID") )
      __debugbreak();
    v14 = &scrContext->m_profileScript.threadId[v10];
    if ( (unsigned int)v8 >= 0x80 )
    {
      LODWORD(v20) = 128;
      LODWORD(v19) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v19, v20) )
        __debugbreak();
    }
    v14->array[v13] |= v12;
    refCount = v9->refCount;
    if ( !v9->refCount )
    {
      v16 = __rdtsc();
      scrContext->m_profileScript.write[(int)v8].startTime = v16;
    }
    ++scrContext->m_profileScript.write[(int)v8].totalCount;
    v9->refCount = refCount + 1;
  }
}

