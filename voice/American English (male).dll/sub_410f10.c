// 函数: sub_410f10
// 地址: 0x410f10
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t __saved_ebp
int32_t* ebp = &__saved_ebp
int32_t esi = arg2
int32_t* ebx = arg1
int32_t edi

if (ebx[7].b != 0)
    ebx, ebp, esi, edi = sub_41019c(0, data_413470)

if (esi s< 0 || esi s> ebx[5])
    ebx, ebp, esi, edi = sub_41019c(esi, data_41351c)

return (*(*ebx + 0x88))(ebp[2])
