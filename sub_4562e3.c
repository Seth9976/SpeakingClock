// 函数: sub_4562e3
// 地址: 0x4562e3
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg4 += 1
*arg1 += arg1.b
char temp0 = *0x25282073
*0x25282073 += arg1:1.b
struct _EXCEPTION_REGISTRATION_RECORD** esp
TEB* fsbase
char* entry_ebx
bool cond:0

if (temp0 + arg1:1.b u>= temp0)
    esp = 0x8b000014
    void* temp1_1 = arg3
    arg3 += 1
    cond:0 = temp1_1 == 0xffffffff
label_45631f:
    *(esp - 4) = arg1
    int32_t* eax_3 = *(entry_ebx + 0x10)
    sub_403e18(eax_3, &data_468718)
    sub_404fb0(*(esp - 4), eax_3[0x19])
    int32_t eax_5
    
    if (cond:0)
        eax_5.b = 1
else
    *(arg3 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2, eflags)
    int32_t var_4_1 = 0
    char* var_8_1 = entry_ebx
    entry_ebx = arg1
    void* var_c_1 = arg3
    int32_t (* var_10_1)(void* arg1, void* arg2) = j_sub_40443c
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char eax_1 = sub_468ec4(entry_ebx)
    cond:0 = eax_1 == 0
    
    if (eax_1 != 0)
        *(entry_ebx + 0x18)
        int32_t ecx
        sub_4577d8(ecx, arg3 - 4)
        arg1 = *(arg3 - 4)
        goto label_45631f
esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_45635e
sub_404b88(arg3 - 4)
return arg3 - 4
