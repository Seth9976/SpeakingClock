// 函数: sub_45109c
// 地址: 0x45109c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_19 = *arg1
void var_15
void* edi = &var_15
void* esi_1 = &arg1[1]
*edi = *esi_1
void* edi_1 = edi + 4
void* esi_2 = esi_1 + 4
*edi_1 = *esi_2
*(edi_1 + 4) = *(esi_2 + 4)
int32_t ebx

if (*data_4ac120 s> 4 || (*data_4ac120 == 4 && *data_4ac358 s> 0))
    ebx.b = 1
else
    ebx = 0

void* esi_4
esi_4.w = 0xfff2
char eax_5 = sub_403df4(sub_403e64(arg3, esi_4), 0x44a270)

if ((arg4 & 1) != 0 && (eax_5 == 0 || (eax_5 != 0 && ebx.b == 0)))
    sub_42bbb0(*(arg2 + 0x14), 0xff00000d)
    sub_42b2b0(*(arg2 + 0xc), 0xff00000e)
else if (ebx.b == 0 || (arg4 & 0x80) == 0)
    sub_42bbb0(*(arg2 + 0x14), 0xff000004)
    sub_42b2b0(*(arg2 + 0xc), 0xff000007)
else
    sub_42bbb0(*(arg2 + 0x14), 0xff000004)
    sub_42b2b0(*(arg2 + 0xc), 0xff000011)

return (*(*arg3 + 0x30))(zx.d(eax_5), zx.d(arg4.w))
