// 函数: sub_4976c7
// 地址: 0x4976c7
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 -= 1
*arg1 += arg1.b
char temp0 = *arg1
*arg1 += arg3:1.b
void* entry_ebx

if (entry_ebx == 0xffffffff)
    *(arg2 + 1) = sbb.b(*(arg2 + 1), (entry_ebx + 1):1.b, temp0 + arg3:1.b u< temp0)
    *(entry_ebx + 0x1a) = sub_497634(arg4, arg2)
    int32_t esi
    esi.w = 0xfffc
    sub_403e64(entry_ebx + 1, esi)
    return sub_497763() __tailcall

void* const result = __return_addr
__return_addr = result
void* const* esp = &__return_addr
*result
*result += result.b
*(entry_ebx + 0x57) += arg2.b

if (arg2.b != 0)
    void var_10
    esp = &var_10
    result = sub_403fcc(arg3, arg2)

sub_4866c0(result, 0)
*(result + 0x19) = 1

if (arg2.b != 0)
    sub_404024(result)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp
    esp = &esp[4]

*esp
esp[1]
return result
