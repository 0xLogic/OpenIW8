/*
==============
flatbuffers::CommonTitleData::Verify
==============
*/

bool __fastcall flatbuffers::CommonTitleData::Verify(flatbuffers::CommonTitleData *this, flatbuffers::Verifier *verifier)
{
  return ?Verify@CommonTitleData@flatbuffers@@QEBA_NAEAVVerifier@2@@Z(this, verifier);
}

/*
==============
flatbuffers::CommonTitleData::Verify
==============
*/
char flatbuffers::CommonTitleData::Verify(flatbuffers::CommonTitleData *this, flatbuffers::Verifier *verifier)
{
  flatbuffers::CommonTitleData *v4; 
  unsigned __int16 v5; 
  flatbuffers::CommonTitleData *v6; 
  unsigned __int16 v7; 
  flatbuffers::CommonTitleData *v8; 
  unsigned __int16 v9; 
  unsigned __int16 v10; 
  flatbuffers::CommonTitleData *v11; 
  flatbuffers::CommonTitleData *v12; 
  unsigned __int16 v13; 
  const unsigned __int8 *v14; 
  unsigned __int16 v15; 
  const unsigned __int8 *data; 
  const unsigned __int8 *v17; 
  const unsigned __int8 *end; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 

  if ( flatbuffers::Table::VerifyTableStart(this, verifier) )
  {
    v4 = &this[-*(int *)this->data_];
    if ( *(_WORD *)v4->data_ <= 4u || (v5 = *(_WORD *)v4[4].data_) == 0 || (v6 = &this[v5], verifier->end_ != verifier->buf_) && (const unsigned __int8 *)v6 >= verifier->buf_ && (const unsigned __int8 *)v6 <= verifier->end_ - 1 )
    {
      if ( *(_WORD *)v4->data_ <= 6u || (v7 = *(_WORD *)v4[6].data_) == 0 || (v8 = &this[v7], (const unsigned __int8 *)(verifier->end_ - verifier->buf_) >= (const unsigned __int8 *)4) && (const unsigned __int8 *)v8 >= verifier->buf_ && (const unsigned __int8 *)v8 <= verifier->end_ - 4 )
      {
        if ( flatbuffers::Table::VerifyField<unsigned char>(this, verifier, 8u) && flatbuffers::Table::VerifyField<unsigned int>(this, verifier, 0xAu) )
        {
          v9 = 0;
          if ( *(_WORD *)v4->data_ <= 0xAu )
            v10 = 0;
          else
            v10 = *(_WORD *)v4[10].data_;
          if ( !v10 )
            goto LABEL_39;
          v11 = &this[v10 + *(unsigned int *)this[v10].data_];
          if ( !v11 )
            goto LABEL_39;
          if ( flatbuffers::Table::VerifyTableStart(v11, verifier) )
          {
            v12 = &v11[-*(int *)v11->data_];
            if ( *(_WORD *)v12->data_ <= 4u || (v13 = *(_WORD *)v12[4].data_) == 0 || (v14 = v11[v13].data_, (const unsigned __int8 *)(verifier->end_ - verifier->buf_) >= (const unsigned __int8 *)8) && v14 >= verifier->buf_ && v14 <= verifier->end_ - 8 )
            {
              if ( *(_WORD *)v12->data_ > 6u )
              {
                v15 = *(_WORD *)v12[6].data_;
                if ( v15 )
                {
                  data = v11[v15].data_;
                  if ( (const unsigned __int8 *)(verifier->end_ - verifier->buf_) < (const unsigned __int8 *)4 || data < verifier->buf_ || data > verifier->end_ - 4 )
                    return 0;
                }
                v9 = *(_WORD *)v12[6].data_;
              }
              if ( !v9 || (v17 = v11[v9 + *(unsigned int *)v11[v9].data_].data_) == NULL || (end = verifier->end_, v19 = end - verifier->buf_, v19 >= 4) && v17 >= verifier->buf_ && v17 <= end - 4 && (v20 = 8i64 * *(unsigned int *)v17 + 4, v20 <= v19) && v17 <= &end[-v20] )
              {
                --verifier->depth_;
LABEL_39:
                --verifier->depth_;
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

