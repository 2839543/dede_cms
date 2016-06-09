
[field:typename/]
[field:typedir/]
[field:typedir function='md5(@me)'/]

[field:sitepath runphp='yes']
	@me=(@me=="")?"空的":@me;
[/field:sitepath]
-----------!!!!!!!
{dede:global.cfg_soft_lang/}
[field:sitepath function='abc(@me)'/] 
<br>
