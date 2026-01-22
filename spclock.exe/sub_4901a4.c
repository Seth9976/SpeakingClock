// 函数: sub_4901a4
// 地址: 0x4901a4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi_1 = arg1[2] - *arg1
int32_t edi_1 = arg1[3] - arg1[1]
int32_t eax_3 = arg2[3] - arg2[1]
long double var_2c = float.t(arg2[2] - *arg2) / float.t(esi_1)
long double var_22 = float.t(eax_3) / float.t(edi_1)
long double st0 = sub_49058c(&var_2c, 1)
int32_t yBottom
int16_t x87control
int16_t x87control_1
yBottom, x87control_1 = sub_40337c(x87control, float.t(edi_1) * st0)
SetRect(arg3, 0, 0, sub_40337c(x87control_1, float.t(esi_1) * st0), yBottom)
return OffsetRect(arg3, *arg2, arg2[1])
