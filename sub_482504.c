// 函数: sub_482504
// 地址: 0x482504
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ebx = arg1
arg1.b = (ebx[7].b & 0x10) != 0
arg1.b ^= 1
int32_t ecx
ecx.b = 1
void* edi = sub_482258(ecx, ebx, arg1.b)

if (arg2 == edi)
    edi = nullptr

sub_481b78(arg2, 0)
arg2[0x95] = 0
return sub_4825a0(ebx, edi, sub_41a290(ebx[0xac]))
