/*
==============
lj_vm_foldarith
==============
*/

double __fastcall lj_vm_foldarith(double x, double y, int op)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm7, xmm1
    vmovaps xmm6, xmm0
  }
  switch ( op )
  {
    case 0:
      __asm
      {
        vaddsd  xmm0, xmm6, xmm7; jumptable 000000014382BF96 case 0
        vmovaps xmm6, [rsp+48h+var_18]
        vmovaps xmm7, [rsp+48h+var_28]
      }
      break;
    case 1:
      __asm
      {
        vsubsd  xmm0, xmm6, xmm7; jumptable 000000014382BF96 case 1
        vmovaps xmm6, [rsp+48h+var_18]
        vmovaps xmm7, [rsp+48h+var_28]
      }
      break;
    case 2:
      __asm
      {
        vmulsd  xmm0, xmm6, xmm7; jumptable 000000014382BF96 case 2
        vmovaps xmm6, [rsp+48h+var_18]
        vmovaps xmm7, [rsp+48h+var_28]
      }
      break;
    case 3:
      __asm
      {
        vdivsd  xmm0, xmm6, xmm7; jumptable 000000014382BF96 case 3
        vmovaps xmm6, [rsp+48h+var_18]
        vmovaps xmm7, [rsp+48h+var_28]
      }
      break;
    case 4:
      __asm { vdivsd  xmm0, xmm6, xmm7; jumptable 000000014382BF96 case 4 }
      *(double *)&_XMM0 = j_lj_vm_floor_1();
      __asm
      {
        vmulsd  xmm1, xmm0, xmm7; Y
        vsubsd  xmm0, xmm6, xmm1; X
        vmovaps xmm6, [rsp+48h+var_18]
        vmovaps xmm7, [rsp+48h+var_28]
      }
      break;
    case 5:
      __asm
      {
        vmovaps xmm6, [rsp+48h+var_18]; jumptable 000000014382BF96 case 5
        vmovaps xmm7, [rsp+48h+var_28]
      }
      x = pow_0(x, y);
      break;
    case 6:
      __asm
      {
        vxorpd  xmm0, xmm6, cs:__xmm@80000000000000008000000000000000; jumptable 000000014382BF96 case 6
        vmovaps xmm6, [rsp+48h+var_18]
        vmovaps xmm7, [rsp+48h+var_28]
      }
      break;
    case 7:
      __asm { vandpd  xmm0, xmm6, cs:__xmm@7fffffffffffffff7fffffffffffffff; jumptable 000000014382BF96 case 7 }
      goto LABEL_10;
    default:
LABEL_10:
      __asm
      {
        vmovaps xmm6, [rsp+48h+var_18]; jumptable 000000014382BF96 default case
        vmovaps xmm7, [rsp+48h+var_28]
      }
      break;
  }
  return x;
}

