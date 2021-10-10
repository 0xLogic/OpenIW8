/*
==============
lj_vm_foldarith
==============
*/

long double __fastcall lj_vm_foldarith(long double x, long double y, int op)
{
  _XMM6 = *(_OWORD *)&x;
  switch ( op )
  {
    case 0:
      x = x + y;
      break;
    case 1:
      x = x - y;
      break;
    case 2:
      x = x * y;
      break;
    case 3:
      x = x / y;
      break;
    case 4:
      x = x - j_lj_vm_floor_1() * y;
      break;
    case 5:
      x = pow_0(x, y);
      break;
    case 6:
      __asm { vxorpd  xmm0, xmm6, cs:__xmm@80000000000000008000000000000000; jumptable 000000014382BF96 case 6 }
      break;
    case 7:
      __asm { vandpd  xmm0, xmm6, cs:__xmm@7fffffffffffffff7fffffffffffffff; jumptable 000000014382BF96 case 7 }
      break;
    default:
      return x;
  }
  return x;
}

