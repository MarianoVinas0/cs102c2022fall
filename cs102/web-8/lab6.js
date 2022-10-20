function changeColor(object)
{
  if( object.className == "red" )
  {
    object.className = "green";
  }
  else if( object.className == "green" )
  {
    object.className = "blue";
  }
  else
  {
    object.className = "red";
  }
}
