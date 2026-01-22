// 函数: sub_496afe
// 地址: 0x496afe
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
DeleteObject(arg1[-8])
void* edx_1 = SelectClipRgn(sub_42c73c(arg1[-5]), nullptr)
arg1[-4] = arg1[-0x11]
void* edi_1 = &arg1[-3]
void* esi_1 = &arg1[-0x10]
*edi_1 = *esi_1
void* edi_2 = edi_1 + 4
void* esi_2 = esi_1 + 4
*edi_2 = *esi_2
*(edi_2 + 4) = *(esi_2 + 4)
arg2 = arg1
sub_496798(zx.d(*(arg1[-6] + 0x20)), edx_1)
int32_t* result = arg1[2]
*result = arg1[-4]
void* edi_6 = &result[1]
void* esi_6 = &arg1[-3]
*edi_6 = *esi_6
void* edi_7 = edi_6 + 4
void* esi_7 = esi_6 + 4
*edi_7 = *esi_7
*(edi_7 + 4) = *(esi_7 + 4)
*arg1
return result
