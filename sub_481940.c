// 函数: sub_481940
// 地址: 0x481940
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404074(arg1, arg2)
void* eax = arg1[0x95]

if (eax != 0)
    if (arg1 == *(eax + 0x2bc))
        *(eax + 0x2bc) = 0
    
    sub_482504(arg1[0x95], arg1)

int32_t edx_1
edx_1.b = arg2.b & 0xfc
int32_t result = sub_45a784(arg1, edx_1)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
