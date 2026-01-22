// 函数: sub_4a4967
// 地址: 0x4a4967
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char* eax_54
int32_t edx
char edx_16
eax_54, edx_16 = (*edx)()
*eax_54 += eax_54.b
void* entry_ebx
*(entry_ebx + 0x70) += edx_16
int32_t arg_20
int32_t edx_1 = arg_20
char* arg_28
char* eax = arg_28
void* arg_24
char* ebp = *(arg_24 + 0x6e) * 0x67
*(arg3 + 0x6c) &= eax.b
int32_t eflags
int32_t esi_1 = __outsd(edx_1.w, *arg1, arg1, eflags)
int32_t eflags_1
int16_t temp0
temp0, eflags_1 = __arpl_memw_gpr16(*(arg3 + 0x2e), ebp.w)
*(arg3 + 0x2e) = temp0
int32_t eflags_2
int16_t temp0_1
temp0_1, eflags_2 = __arpl_memw_gpr16(*(eax + 0x6d), ebp.w)
*(eax + 0x6d) = temp0_1
*eax += eax.b
arg_28 = ebp
int32_t* ebp_1 = &arg_28
void* arg_8 = arg3
int32_t arg_4 = esi_1
int32_t ecx_1 = 0
int64_t* arg_c = nullptr
arg_24 = nullptr
arg_20 = 0
char* ebx_1 = eax
__return_addr = &arg_28
int32_t (* var_4)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (ebx_1[0x500] != 0)
    ecx_1, edx_1 = sub_4a4d38(ebx_1)

if (ebx_1[0x502] != 0)
    sub_472cd4(ebx_1, edx_1, ecx_1)

int32_t var_14 = 0x4b1e02
sub_40ad1c(&data_4b1e00, &data_4b1dfe, &data_4b1dfc, 0x4b1e02, fconvert.d(sub_40b044()))

if (data_4b1dfc u< 0xc)
    ebx_1[0x442] = 0
else
    ebx_1[0x442] = 1

sub_40affc(&data_4b1e08, 0x4b1e04, fconvert.d(sub_40b044()))
data_4b1e0a = sub_40b01c(fconvert.d(sub_40b044()))

if (data_4b1e10 != data_4b1e00)
    double var_10_3
    
    if (ebx_1[0x503] == 0)
        sub_4a63b4(ebx_1)
    else if (ebx_1[0x44e] == 0)
        var_10_3:4.d = sub_49299c(sub_492e9c(*(*data_4ac000 + 0x60), 0x15), &data_4b1dfe)
        sub_42c1ac(0, 0x25, *(*(ebx_1 + 0x3ec) + 0x190))
        ebx_1[0x44e] = 1
    else
        var_10_3:4.d = sub_49299c(sub_492e9c(*(*data_4ac000 + 0x60), 0x14), &data_4b1dfe)
        sub_42c1ac(0, 0x25, *(*(ebx_1 + 0x3ec) + 0x190))
        ebx_1[0x44e] = 0
    
    var_10_3:4.d = arg3
    var_10_3.d = (fconvert.d(sub_40b044())).d
    sub_40bc44(&arg_24, *data_4ac2ac)
    arg1.q = fconvert.d(sub_40b044())
    var_10_3:4.d = arg2
    var_10_3.d = arg1
    sub_40bc44(&arg_20, *data_4ac134)
    var_10_3:4.d = "Time: "
    var_10_3.d = arg_24
    void* const var_14_1 = "   Date: "
    int32_t var_18_1 = arg_20
    int64_t* ecx_4 = sub_404f1c(&arg_c, 4)
    ebx_1, ebp_1 = sub_49f72c(*(ebx_1 + 0x3fc), arg_c, ecx_4)

if (data_4b1e0e != data_4b1dfe)
    if (ebx_1[0x503] != 0)
        sub_4a6604(ebx_1)
    else
        sub_4a6304(ebx_1)
    
    sub_4a8510()

if (data_4b1e0e != data_4b1dfe)
    *(ebx_1 + 0x410)
    
    if (mods.dp.d(sx.q(zx.d(data_4b1dfe)), *(ebx_1 + 0x410)) == 0 && ebx_1[0x440] != 0
            && ebx_1[0x4ff] == 0)
        int32_t ecx_5 = sub_4a5d34(ebx_1)
        ebx_1[0x4ff] = 1
        uint32_t eax_33 = zx.d(*(ebx_1 + 0x428) * 0x3e8)
        sub_4a4138(ecx_5, eax_33 | eax_33 << 0x10)
        int32_t edx_14
        edx_14.b = 1
        int32_t* eax_36 = sub_4a2610(&data_4a25f8, edx_14)
        eax_36[7] = ebx_1
        eax_36[6] = sub_4a5990

if (data_4b1e0e != data_4b1dfe)
    ebx_1[0x44b] = 0

if (data_4b1e0c != data_4b1dfc)
    if (ebx_1[0x503] != 0)
        sub_4a6604(ebx_1)
    else
        sub_4a5dac(ebx_1)

if (data_4b1e12 != data_4b1e08 && ebx_1[0x503] == 0)
    sub_4a6464(ebx_1)

data_4b1e0c = data_4b1dfc
data_4b1e0e = data_4b1dfe
data_4b1e10 = data_4b1e00
data_4b1e12 = data_4b1e08
data_4b1e14 = data_4b1e0a

if (ebx_1[0x44a] == 0 && ebx_1[0x441] != 0 && ebx_1[0x44b] == 0
        && zx.d(data_4b1dfc) == *(ebx_1 + 0x408) && zx.d(data_4b1dfe) == *(ebx_1 + 0x40c))
    sub_4a57b0(ebx_1)

fsbase->NtTib.ExceptionList = ExceptionList
__return_addr = sub_4a4cda
sub_404b88(&ebp_1[-7])
return sub_404bac(&ebp_1[-2], 2)
