// 函数: sub_4090b0
// 地址: 0x4090b0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_1c = ebx
int32_t esi
int32_t var_20 = esi
int32_t edi
int32_t var_24 = edi
int32_t var_18 = 0
void** var_c = arg3
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char* ebx_1 = arg1
void* edx = arg1
void* eax = edx

if (eax != 0)
    eax = *(eax - 4)

void* esi_1 = eax + ebx_1
void* eax_2 = edx

if (eax_2 != 0)
    eax_2 = *(eax_2 - 4)

void* var_10 = eax_2

while (esi_1 u> ebx_1)
    char eax_4 = *ebx_1
    
    if (eax_4 == 0xa)
        if (arg2 == 1)
            var_10 += 1
        
        ebx_1 = &ebx_1[1]
    else if (eax_4 == 0xd)
        if (arg2 != 1)
            if (ebx_1[1] == 0xa)
                var_10 -= 1
        else if (ebx_1[1] != 0xa)
            var_10 += 1
        else
            ebx_1 = &ebx_1[1]
        
        ebx_1 = &ebx_1[1]
    else if (not(test_bit(data_4aa800, zx.d(*ebx_1))))
        ebx_1 = &ebx_1[1]
    else
        PSTR eax_8
        eax_8, arg3 = sub_40daf8(ebx_1)
        ebx_1 = eax_8

sub_404d80(arg3, ebx_1)
int32_t eax_9 = var_18

if (eax_9 != 0)
    eax_9 = *(eax_9 - 4)

if (eax_9 != var_10)
    int64_t* ebx_2 = arg1
    sub_404c78(var_c, nullptr, var_10)
    void* edi_3 = *var_c
    
    while (esi_1 u> ebx_2)
        char eax_13 = *ebx_2
        
        if (eax_13 == 0xa)
            if (arg2 == 1)
                *edi_3 = 0xd
                edi_3 += 1
            
            *edi_3 = 0xa
            edi_3 += 1
            ebx_2 += 1
        else if (eax_13 == 0xd)
            if (arg2 == 1)
                *edi_3 = 0xd
                edi_3 += 1
            
            *edi_3 = 0xa
            edi_3 += 1
            ebx_2 += 1
            
            if (*ebx_2 == 0xa)
                ebx_2 += 1
        else if (not(test_bit(data_4aa800, zx.d(*ebx_2))))
            *edi_3 = *ebx_2
            edi_3 += 1
            ebx_2 += 1
        else
            void* eax_17 = sub_40dad8(ebx_2)
            sub_4030d0(ebx_2, edi_3, eax_17)
            edi_3 += eax_17
            ebx_2 += eax_17
else
    sub_404bdc(var_c, arg1)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_28_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_40921e
int32_t* result = &var_18
sub_404b88(result)
return result
