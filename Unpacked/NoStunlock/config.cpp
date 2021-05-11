class CfgPatches
{
	class NoStunlock
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class NoStunlock
	{
		dir="NoStunlock";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="NoStunlock";
		credits="DUAL";
		author="DUAL";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"NoStunlock\4_World"
				};
			};
		};
	};
};
