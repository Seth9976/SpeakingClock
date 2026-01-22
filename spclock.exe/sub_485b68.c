// 函数: sub_485b68
// 地址: 0x485b68
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eflags
int16_t* edi
int16_t temp0
temp0, edi = __insd(arg5, arg2.w, eflags)
*edi = temp0
uint32_t eax_11
int32_t* entry_ebx
void* esp
bool c

if (not(c))
label_485bce:
    *edi = ror.b(*edi, 0xb7)
    arg1 = __return_addr
    void arg_4
    esp = &arg_4
    arg1.b += *arg1
    *edi += arg3
    entry_ebx:1.b = 0xd2
label_485bde:
    *(esp - 4) = arg1 | arg2 << 0x10
    *(esp - 8) = 0
    esp -= 8
label_485be1:
    *(esp - 4) = 0x465
    *(esp - 8) = sub_45f888(entry_ebx)
    SendMessageA()
    esp += 8
    eax_11 = zx.d(entry_ebx[0x99].w)
else
    bool z
    
    if (z)
        goto label_485bde
    
    if (not(c))
        goto label_485bce
    
    if (not(z))
        goto label_485be1
    
    TEB* fsbase
    __outsd(arg2.w, *(fsbase + arg4), arg4, eflags)
    
    if (z || c)
        *(entry_ebx + 0x56) += arg2.b
        void var_8
        esp = &var_8
        entry_ebx = arg1
        int32_t esi_1 = entry_ebx[0x12]
        sub_45baac(entry_ebx)
        int32_t* eax_1 = entry_ebx[0x95]
        
        if (eax_1 != 0)
            sub_4860a8(entry_ebx, eax_1)
            int32_t var_c_1 = 0
            WPARAM wParam = sub_45f888(entry_ebx[0x95])
            int32_t var_14_1 = 0x469
            SendMessageA(sub_45f888(entry_ebx), 0x469, wParam, 0)
            esp = &var_8
        
        sub_456ec8(entry_ebx, esi_1)
        arg1 = zx.d(*(entry_ebx + 0x25a))
        arg2 = zx.d(entry_ebx[0x96].w)
        goto label_485bde
    
    arg1.b = arg1.b
    *(entry_ebx - 0x6364173d) += arg3
    char ecx
    eax_11, ecx = (*(arg1 - 0x18))()
    *(eax_11 + (edi << 3)) -= entry_ebx
    *edi -= 1
    entry_ebx:1.b = 0x83
    eax_11.b += *(fsbase + eax_11)
    *edi += ecx
    entry_ebx:1.b = 0xc0

*(esp - 4) = eax_11
*(esp - 8) = 0
*(esp - 0xc) = 0x467
*(esp - 0x10) = sub_45f888(entry_ebx)
SendMessageA()
*(esp - 4) = esp
*(esp - 8) = 1
*(esp - 0xc) = 0x46c
*(esp - 0x10) = sub_45f888(entry_ebx)
SendMessageA()
*(esp + 4) = entry_ebx[0x97]
*(esp - 4) = esp
*(esp - 8) = 1
*(esp - 0xc) = 0x46b
*(esp - 0x10) = sub_45f888(entry_ebx)
int32_t result = SendMessageA()
*esp
*(esp + 4)
*(esp + 8)
*(esp + 0xc)
return result
