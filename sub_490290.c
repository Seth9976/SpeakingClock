// 函数: sub_490290
// 地址: 0x490290
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* lprc = arg1

if (arg2 == 0)
    return 

long double x87_r7_2 = float.t(arg2) * data_490528
int32_t eax = *lprc
int32_t esi_2 = lprc[2] - eax
int32_t esi_3 = esi_2 s>> 1
bool c_1 = unimplemented  {sar esi, 0x1}

if (esi_2 s>> 1 s< 0)
    esi_3 = adc.d(esi_3, 0, c_1)

int32_t edi_2 = lprc[3] - lprc[1]
int32_t edi_3 = edi_2 s>> 1
bool c_2 = unimplemented  {sar edi, 0x1}

if (edi_2 s>> 1 s< 0)
    edi_3 = adc.d(edi_3, 0, c_2)

int32_t ebp_2 = eax + esi_3
int32_t eax_2 = lprc[1] + edi_3
uint32_t var_78_1 = zx.d(x87_r7_2:8.w)
int32_t var_7c_1 = x87_r7_2:4.d
long double st0_1 = sub_403360(x87_r7_2.d)
uint32_t var_78_2 = zx.d(x87_r7_2:8.w)
int32_t var_7c_2 = x87_r7_2:4.d
long double st0_2 = sub_403350(x87_r7_2.d)
int32_t edx_1 = ebp_2 - sub_403370(float.t(esi_3) * st0_2 - float.t(edi_3) * st0_1)
int32_t edx_3 = ebp_2 - sub_403370(float.t(esi_3) * st0_2 + float.t(edi_3) * st0_1)
int32_t eax_8 = sub_403370(float.t(esi_3) * st0_2 + float.t(edi_3) * st0_1) + ebp_2
int32_t ebp_3 = ebp_2 + sub_403370(float.t(esi_3) * st0_2 - float.t(edi_3) * st0_1)
int32_t eax_11 = sub_403370(float.t(esi_3) * st0_1 - float.t(edi_3) * st0_2) + eax_2
int32_t eax_13 = sub_403370(float.t(esi_3) * st0_1 + float.t(edi_3) * st0_2) + eax_2
int32_t edx_5 = eax_2 - sub_403370(float.t(esi_3) * st0_1 + float.t(edi_3) * st0_2)
int32_t edx_7 = eax_2 - sub_403370(float.t(esi_3) * st0_1 - float.t(edi_3) * st0_2)
int32_t var_20 = edx_1
int32_t var_1c_1 = edx_3
int32_t var_18_1 = eax_8
int32_t var_14_1 = ebp_3
*lprc = sub_490560(&var_20, 3)
var_20 = edx_1
int32_t var_1c_2 = edx_3
int32_t var_18_2 = eax_8
int32_t var_14_2 = ebp_3
lprc[2] = sub_490534(&var_20, 3)
var_20 = eax_11
int32_t var_1c_3 = eax_13
int32_t var_18_3 = edx_5
int32_t var_14_3 = edx_7
lprc[1] = sub_490560(&var_20, 3)
var_20 = eax_11
int32_t var_1c_4 = eax_13
int32_t var_18_4 = edx_5
int32_t var_14_4 = edx_7
lprc[3] = sub_490534(&var_20, 3)
OffsetRect(lprc, neg.d(*lprc), neg.d(lprc[1]))
