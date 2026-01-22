// 函数: sub_415714
// 地址: 0x415714
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_210 = ebx
int32_t esi
int32_t var_214 = esi
int32_t edi
int32_t var_218 = edi
int32_t var_20c = 0
int64_t** esi_1 = arg2
int16_t ebx_1 = arg1
int32_t* var_21c = &var_4
int32_t (* var_220)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t edi_1 = ebx_1 & 0xfff

if (edi_1 u<= 0x14)
    sub_404bdc(esi_1, (&data_4aaad8)[zx.d(edi_1)])
else if (ebx_1 == 0x100)
    sub_404bdc(esi_1, "String")
else if (ebx_1 != 0x101)
    void var_8
    char eax_4
    eax_4, ebx_1, ebp_1, esi_1 = sub_415ce4(ebx_1, &var_8)
    
    if (eax_4 == 0)
        sub_409454(&ebp_1[-0x82], 4)
        sub_404ea0(esi_1, *data_4ac44c, ebp_1[-0x82])
    else
        sub_403b48(*ebp_1[-1], &ebp_1[-0x81])
        sub_404dec(sub_403040(0x7fffffff, 2, &ebp_1[-0x81], &ebp_1[-0x41]), &ebp_1[-0x41])
else
    sub_404bdc(esi_1, 0x415860)

if ((ebx_1:1.b & 0x20) != 0)
    sub_404ea0(esi_1, "Array ", *esi_1)

if ((ebx_1:1.b & 0x40) != 0)
    sub_404ea0(esi_1, "ByRef ", *esi_1)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_21c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_415841
sub_404b88(&ebp_1[-0x82])
return &ebp_1[-0x82]
