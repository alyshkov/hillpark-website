<div class="catalogue-item" href="<%=href%>">
  <table cellspacing="0" borderspacing="0"><tr>
  <td class="td-photo"><img class="photo" src="<%=href%>/_small.jpg" /></td>
  <td class="td-info">
    <div class="title"><%=title%></div>
    <div class="info"><table cellspacing="0" borderspacing="0">
      <tr><td class="prop">дом:</td><td class="plus"></td><td class="prop">парк на крыше:</td></tr>
      <tr><td class="value"><%=house%> м<sup>2</sup></td><td class="plus">+</td><td class="value"><%=roof%> м<sup>2</sup></td></tr>
    </table></div>
  </td>
  <td class="td-price">
	<%If sold Then%>
	<div class="sold-label">ДОМ ПРОДАН</div>
	<%Else%>
    <div class="price">
      <div class="line1"><span class="price-value"><%=price%></span> млн. руб.</div>
      <div class="line2">цена с участком 15 соток</div>
    </div>
	<%End If%>
  </td>
  </tr></table>
</div>