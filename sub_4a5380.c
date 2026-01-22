// 函数: sub_4a5380
// 地址: 0x4a5380
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_1c
__builtin_memset(&var_1c, 0, 0x18)
int32_t ebx
int32_t var_20 = ebx
int32_t esi
int32_t var_24 = esi
int32_t edi
int32_t var_28 = edi
int32_t* var_2c = &var_4
int32_t (* var_30)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx
edx.b = 1
void* eax = sub_46d398(sub_4a10e0+0x48, edx)

if (*(arg1 + 0x447) == 0)
    arg1[0xff]
    sub_49fc18()
else
    arg1[0xff]
    sub_49fc40()

*(arg1 + 0x441)
(*(**(eax + 0x36c) + 0xdc))()
int32_t var_8

if (*(arg1 + 0x441) == 0)
    (*(**(eax + 0x364) + 0x68))(var_8)
    (*(**(eax + 0x368) + 0x68))()
    (*(**(eax + 0x3a0) + 0x68))()
    (*(**(eax + 0x3a4) + 0x68))()

arg1[0x110].b
(*(**(eax + 0x384) + 0xdc))(var_8)
*(arg1 + 0x44f)
(*(**(eax + 0x3d8) + 0xdc))()

if (arg1[0x110].b == 0)
    (*(**(eax + 0x388) + 0x68))()

if (*(arg1 + 0x449) != 0)
    sub_4861d4(*(eax + 0x378), 0x17)
    sub_486184(*(eax + 0x378), 0)
    sub_486280(*(eax + 0x378), arg1[0x102].w)
else
    sub_4861d4(*(eax + 0x378), 0xc)
    sub_486184(*(eax + 0x378), 1)
    int32_t eax_13 = arg1[0x102]
    
    if (eax_13 s< 0xc)
        int32_t edx_11
        edx_11.b = 1
        (*(**(eax + 0x3a0) + 0xdc))()
        
        if (arg1[0x102] != 0)
            sub_486280(*(eax + 0x378), arg1[0x102].w)
        else
            sub_486280(*(eax + 0x378), 0xc)
    else
        if (eax_13 s<= 0xc)
            sub_486280(*(eax + 0x378), arg1[0x102].w)
        else
            sub_486280(*(eax + 0x378), arg1[0x102].w - 0xc)
        
        int32_t edx_13
        edx_13.b = 1
        (*(**(eax + 0x3a4) + 0xdc))()

sub_486280(*(eax + 0x37c), arg1[0x103].w)
sub_486280(*(eax + 0x38c), arg1[0x104].w)
arg1[0x105]
(*(**(eax + 0x3c4) + 0xe0))()
int32_t* ebx_2
void* ebp_1
ebx_2, ebp_1 = sub_457808(*(eax + 0x3ac), data_4b1df4)
sub_486280(ebx_2[0xee], arg1[0x10d].w)

if (arg1[0x105] != 5)
    (*(*ebx_2[0xeb] + 0x68))()
    (*(*ebx_2[0xec] + 0x68))()

if (*(arg1 + 0x449) == 0)
    sub_4576f8(ebx_2[0xe8], 1)
    sub_4576f8(ebx_2[0xe9], 1)
else
    sub_4576f8(ebx_2[0xe8], 0)
    sub_4576f8(ebx_2[0xe9], 0)

int32_t eax_35
int32_t ecx_14
eax_35, ecx_14 = (*(*ebx_2 + 0xfc))()

if (eax_35 == 1)
    ebx_2[0xeb]
    sub_4577d8(ecx_14, ebp_1 - 8)
    sub_404bdc(&data_4b1df4, *(ebp_1 - 8))
    *(arg1 + 0x441) = (*(*ebx_2[0xdb] + 0xd8))()
    arg1[0x110].b = (*(*ebx_2[0xe1] + 0xd8))()
    *(arg1 + 0x44f) = (*(*ebx_2[0xf6] + 0xd8))()
    int32_t eax_45
    int32_t ecx_15
    eax_45, ecx_15 = (*(*ebx_2[0xf1] + 0xdc))()
    arg1[0x105] = eax_45
    ebx_2[0xe2]
    sub_4577d8(ecx_15, ebp_1 - 0xc)
    int32_t eax_48
    int32_t ecx_16
    eax_48, ecx_16 = sub_403614(*(ebp_1 - 0xc), ebp_1 - 4)
    
    if (eax_48 s>= 1 && eax_48 s<= 0x3c)
        arg1[0x104] = eax_48
    
    ebx_2[0xd9]
    sub_4577d8(ecx_16, ebp_1 - 0x10)
    int32_t eax_51
    int32_t ecx_17
    eax_51, ecx_17 = sub_403614(*(ebp_1 - 0x10), ebp_1 - 4)
    
    if (*(arg1 + 0x449) == 0)
        char eax_53
        eax_53, ecx_17 = (*(*ebx_2[0xe9] + 0xd8))()
        
        if (eax_53 == 0)
            arg1[0x102] = eax_51
            
            if (eax_51 == 0xc)
                arg1[0x102] = 0
        else
            arg1[0x102] = eax_51 + 0xc
            
            if (eax_51 == 0xc)
                arg1[0x102] = 0xc
    else
        arg1[0x102] = eax_51
    
    ebx_2[0xda]
    sub_4577d8(ecx_17, ebp_1 - 0x14)
    int32_t eax_58
    int32_t ecx_18
    eax_58, ecx_18 = sub_403614(*(ebp_1 - 0x14), ebp_1 - 4)
    
    if (eax_58 s>= 0 && eax_58 s<= 0x3b)
        arg1[0x103] = eax_58
    
    ebx_2[0xed]
    sub_4577d8(ecx_18, ebp_1 - 0x18)
    int32_t eax_61 = sub_403614(*(ebp_1 - 0x18), ebp_1 - 4)
    
    if (eax_61 s>= 0 && eax_61 s<= 0x3c)
        arg1[0x10d] = eax_61
    
    int32_t esi_4
    esi_4.w = 0xffa6
    sub_403e64(arg1, esi_4)

sub_472f50(ebx_2)
arg1[0xff]
sub_49fc18()
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4a57a8
return sub_404bac(ebp_1 - 0x18, 5)
