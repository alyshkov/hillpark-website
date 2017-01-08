<div class="catalogue-item" href="<%=href%>">
  <table cellspacing="0" borderspacing="0"><tr>
  <td class="td-photo"><img class="photo" src="<%=href%>/_small.jpg" /></td>
  <td class="td-info">
    <div class="title"><%=title%></div>
    <div class="info"><ul>
		<li><span class="prop">площадь дома:</span><span class="value"><%=house%> м<sup>2</sup></span></li>
		<li><span class="prop">отапливаемая:</span><span class="value"><%=warm%> м<sup>2</sup></span></li>
		<li><span class="prop">парк на крыше:</span><span class="value"><%=roof%> м<sup>2</sup></span></li>
	</ul></div>
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