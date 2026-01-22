// 函数: sub_404ea0
// 地址: 0x404ea0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2 == 0)
    return sub_404bdc(arg1, arg3) __tailcall

if (arg3 == 0)
    return sub_404bdc(arg1, arg2) __tailcall

if (arg2 == *arg1)
    return sub_404e54(arg1, arg3) __tailcall

if (arg3 != *arg1)
    sub_404bdc(arg1, arg2)
    return sub_404e54(arg1, arg3) __tailcall

int32_t eax_3 = *(arg2 - 4)

if (add_overflow(eax_3, *(arg3 - 4)))
    int32_t eax_4
    eax_4.b = 5
    noreturn sub_402ff8(eax_4) __tailcall

void* eax_5 = sub_404c4c(eax_3 + *(arg3 - 4))
int64_t* edi = eax_5
sub_4030d0(arg2, eax_5, *(arg2 - 4), arg1)
sub_4030d0(arg3, edi + *(arg2 - 4), *(arg3 - 4))

if (edi != 0)
    edi[-1].d -= 1

return sub_404bdc(arg1, edi)
